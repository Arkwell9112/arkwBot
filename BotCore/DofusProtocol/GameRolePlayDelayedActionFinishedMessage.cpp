#include "GameRolePlayDelayedActionFinishedMessage.h"

void GameRolePlayDelayedActionFinishedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayDelayedActionFinishedMessage(input);
}

void GameRolePlayDelayedActionFinishedMessage::deserializeAs_GameRolePlayDelayedActionFinishedMessage(
        ICustomDataInput &input) {
    this->_delayedCharacterIdFunc(input);
    this->_delayTypeIdFunc(input);
}

void GameRolePlayDelayedActionFinishedMessage::_delayedCharacterIdFunc(ICustomDataInput &input) {
    this->delayedCharacterId = input.readDouble();

}

void GameRolePlayDelayedActionFinishedMessage::_delayTypeIdFunc(ICustomDataInput &input) {
    this->delayTypeId = input.readByte();

}

