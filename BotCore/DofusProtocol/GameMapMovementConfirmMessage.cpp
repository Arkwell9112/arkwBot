#include "GameMapMovementConfirmMessage.h"
#include "../ConfigManager.h"

void GameMapMovementConfirmMessage::deserialize(ICustomDataInput &input) {
}

void GameMapMovementConfirmMessage::deserializeAs_GameMapMovementConfirmMessage(ICustomDataInput &input) {
}

Packet GameMapMovementConfirmMessage::serialize() {
    std::string packetName("GameMapMovementConfirmMessage");
    return Packet(ConfigManager::getInstance().getPacketID(packetName), 0, nullptr, 0, nullptr);
}