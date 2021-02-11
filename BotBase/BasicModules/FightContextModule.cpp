#include "FightContextModule.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/DofusProtocol/GameEntitiesDispositionMessage.h"
#include "../../BotCore/DofusProtocol/GameMapMovementMessage.h"
#include "../../BotCore/BotException.h"

void FightContextModule::dispatcherCallBack(Packet &packet) {
    if (isWaiting) {
        if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "GameEntitiesDispositionMessage") {
            GameEntitiesDispositionMessage currentMessage;
            ICustomDataInput input(packet.getPacketSize(), packet.getData());
            currentMessage.deserialize(input);
            auto it = currentMessage.dispositions.begin();
            while (it != currentMessage.dispositions.end()) {
                if (it->id == ConfigManager::getInstance().getActorID()) {
                    playerPos = &context->getPoint(it->cellId);
                } else {
                    fighterPos = &context->getPoint(it->cellId);
                    turnCount = 0;
                }
                it++;
            }
        } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "GameMapMovementMessage") {
            GameMapMovementMessage currentMessage;
            ICustomDataInput input(packet.getPacketSize(), packet.getData());
            currentMessage.deserialize(input);
            if (currentMessage.actorId == ConfigManager::getInstance().getActorID()) {
                playerPos = &context->getPoint(currentMessage.keyMovements.back() & 4095);
            } else {
                fighterPos = &context->getPoint(currentMessage.keyMovements.back() & 4095);
                turnCount = 0;
            }
        } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) ==
                   "GameFightTurnStartPlayingMessage") {
            turnCount++;
            isLock = false;
            parent.moduleCallBack(this);
        }
    }
}

void FightContextModule::init(const MapContext &_context) {
    context = &_context;
    isWaiting = true;
}

void FightContextModule::stop() {
    isWaiting = false;
}

const FightPoint &FightContextModule::getMovePoint() {
    std::list<const FightPoint *> movePoints;
    for (int i = 0; i < 560; i++) {
        const FightPoint &currentPoint = context->getPoint(i);
        if (playerPos->getManhattanDistanceTo(currentPoint) == 1 && currentPoint.isMove() &&
            currentPoint.isFloorOkTo(*playerPos)) {
            movePoints.emplace_back(&currentPoint);
        }
    }
    if (!movePoints.empty() && !isLock) {
        if (turnCount != 5) {
            const FightPoint *betterPoint = movePoints.front();
            auto it = movePoints.begin();
            while (it != movePoints.end()) {
                if ((*it)->getManhattanDistanceTo(*fighterPos) < betterPoint->getManhattanDistanceTo(*fighterPos)) {
                    betterPoint = *it;
                }
                it++;
            }
            if (betterPoint->getManhattanDistanceTo(*fighterPos) < playerPos->getManhattanDistanceTo(*fighterPos) &&
                playerPos->getManhattanDistanceTo(*fighterPos) > 1) {
                return *betterPoint;
            }
        } else {
            auto it = movePoints.begin();
            while (it != movePoints.end()) {
                if (**it != *fighterPos) {
                    isLock = true;
                    turnCount = 0;
                    return **it;
                }
                it++;
            }
            turnCount = 0;
        }
    }
    throw BotException(19);
}

const FightPoint &FightContextModule::getFighterPos() const {
    return *fighterPos;
}