#include "FightModule.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcher.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/BotException.h"
#include "../../BotCore/LogManager.h"

void FightModule::init(const MapContext &context) {
    LogManager::getInstance().log("FightModule: FightModule.", 2);
    PacketDispatcher::getInstance().addListener(fightContextModule);
    ClickManager::toggleFighting();
    isWaiting = true;
    isEnd = false;
    fightContextModule.init(context);
    if (!isFirst) {
        state = "Begin";
    } else {
        state = "PreBegin";
        isFirst = false;
    }
    new(&clickFirst) Timeout(*this, 1500);
}

void FightModule::dispatcherCallBack(Packet &packet) {
    if (isWaiting) {
        if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "GameFightEndMessage") {
            isEnd = true;
        } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) ==
                   "MapComplementaryInformationsDataMessage" && isEnd) {
            clickFirst.cancelTimeOut();
            clickSecond.cancelTimeOut();
            isWaiting = false;
            fightContextModule.stop();
            state = "End";
            new(&clickFirst) Timeout(*this, 1500);
        }
    }
}

void FightModule::moduleCallBack(void *child) {
    if (child == &fightContextModule) {
        state = "Move";
        count = 0;
        new(&clickFirst) Timeout(*this, 1500);
    }
}

void FightModule::timeoutCallBack(void *caller) {
    if (caller == &clickFirst || caller == &clickSecond) {
        LogManager::getInstance().log("FightModule: DoingState: " + state, 2);
        if (state == "PreBegin") {
            state = "Begin";
            isKeyboard = true;
            isRetime = true;
            clickKey = ConfigManager::getInstance().getCreatureKey();
        } else if (state == "Begin") {
            isKeyboard = true;
            isRetime = false;
            clickKey = ConfigManager::getInstance().getTurnKey();
        } else if (state == "Move") {
            count++;
            if (count == ConfigManager::getInstance().getPMCount()) {
                state = "Spell";
                count = 0;
            }
            isKeyboard = false;
            isRetime = true;
            try {
                clickPoint = fightContextModule.getMovePoint().getScreenPosition();
            } catch (BotException &e) {
                count = 0;
                state = "Spell";
                timeoutCallBack(caller);
                return;
            }
        } else if (state == "Spell") {
            state = "SpellEnd";
            isKeyboard = true;
            isRetime = true;
            clickKey = ConfigManager::getInstance().getSpellKey();
        } else if (state == "SpellEnd") {
            count++;
            if (count == ConfigManager::getInstance().getSpellCount()) {
                state = "Turn";
            } else {
                state = "Spell";
            }
            isKeyboard = false;
            isRetime = true;
            clickPoint = fightContextModule.getFighterPos().getScreenPosition();
        } else if (state == "Turn") {
            isKeyboard = true;
            isRetime = false;
            clickKey = ConfigManager::getInstance().getTurnKey();
        } else if (state == "End") {
            state = "PostEnd";
            isKeyboard = true;
            isRetime = true;
            clickKey = VK_ESCAPE;
        } else if (state == "PostEnd") {
            LogManager::getInstance().log("FightModule: End FightModule.", 2);
            ClickManager::toggleFighting();
            return;
        }
        if (!isKeyboard) {
            ClickManager::subClick(clickPoint);
        } else {
            ClickManager::keybd(clickKey);
        }
        if (isRetime) {
            if (caller == &clickFirst) {
                new(&clickSecond) Timeout(*this, 1500);
            } else {
                new(&clickFirst) Timeout(*this, 1500);
            }
        }
    }
}