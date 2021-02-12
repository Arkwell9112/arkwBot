#include "MapContextModule.h"
#include "../../BotCore/DofusProtocol/CurrentMapMessage.h"
#include "../../BotCore/DofusProtocol/InteractiveElementUpdatedMessage.h"
#include "../../BotCore/DofusProtocol/InventoryWeightMessage.h"
#include "../../BotCore/DofusProtocol/CharacterSelectedSuccessMessage.h"
#include "../../BotCore/ConfigManager.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcher.h"
#include "../../BotCore/DofusProtocol/GameActionFightDeathMessage.h"

void MapContextModule::dispatcherCallBack(Packet &packet) {
    if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "CurrentMapMessage") {
        CurrentMapMessage currentMessage;
        ICustomDataInput input(packet.getPacketSize(), packet.getData());
        currentMessage.deserialize(input);
        mapID = currentMessage.mapId;
    } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) ==
               "MapComplementaryInformationsDataMessage") {
        MapComplementaryInformationsDataMessage currentMessage;
        ICustomDataInput input(packet.getPacketSize(), packet.getData());
        currentMessage.deserialize(input);
        if (mapID == currentMessage.mapId) {
            unsigned int currentMapID = (unsigned int) mapID;
            context = &ConfigManager::getInstance().getMapContext(currentMapID);
            message = currentMessage;
            parent.moduleCallBack(this);
        }
    } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "InteractiveElementUpdatedMessage") {
        InteractiveElementUpdatedMessage currentMessage;
        ICustomDataInput input(packet.getPacketSize(), packet.getData());
        currentMessage.deserialize(input);
        auto it = message.interactiveElements.begin();
        while (it != message.interactiveElements.end()) {
            if (it->elementId == currentMessage.interactiveElement.elementId) {
                *it = currentMessage.interactiveElement;
                break;
            }
            it++;
        }
    } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "InventoryWeightMessage") {
        InventoryWeightMessage currentMessage;
        ICustomDataInput input(packet.getPacketSize(), packet.getData());
        currentMessage.deserialize(input);
        inventoryWeight = currentMessage.inventoryWeight;
    } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "CharacterSelectedSuccessMessage") {
        CharacterSelectedSuccessMessage currentMessage;
        ICustomDataInput input(packet.getPacketSize(), packet.getData());
        currentMessage.deserialize(input);
        ConfigManager::getInstance().setActorID(currentMessage.infos.id);
    } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "GameFightStartingMessage") {
        PacketDispatcher::getInstance().addListener(fightModule);
        fightModule.init(getContext());
    } else if (ConfigManager::getInstance().getPacketName(packet.getPacketID()) == "GameActionFightDeathMessage") {
        GameActionFightDeathMessage currentMessage;
        ICustomDataInput input(packet.getPacketSize(), packet.getData());
        currentMessage.deserialize(input);
        if (ConfigManager::getInstance().getActorID() == currentMessage.targetId) {
            isDead = true;
        }
    }
}

const MapContext &MapContextModule::getContext() const {
    return *context;
}

const MapComplementaryInformationsDataMessage &MapContextModule::getMessage() const {
    return message;
}

unsigned int MapContextModule::getWeight() const {
    return inventoryWeight;
}

void MapContextModule::setIsDead() {
    isDead = true;
}

bool MapContextModule::getIsDead() {
    if (isDead) {
        isDead = false;
        return true;
    }
    return false;
}