#include "GameRolePlayDelayedActionMessage.h"

void GameRolePlayDelayedActionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayDelayedActionMessage(input);
}

void GameRolePlayDelayedActionMessage::deserializeAs_GameRolePlayDelayedActionMessage(ICustomDataInput &input) {
    this->_delayedCharacterIdFunc(input);
    this->_delayTypeIdFunc(input);
    this->_delayEndTimeFunc(input);
}

void GameRolePlayDelayedActionMessage::_delayedCharacterIdFunc(ICustomDataInput &input) {
    this->delayedCharacterId = input.readDouble();

}

void GameRolePlayDelayedActionMessage::_delayTypeIdFunc(ICustomDataInput &input) {
    this->delayTypeId = input.readByte();

}

void GameRolePlayDelayedActionMessage::_delayEndTimeFunc(ICustomDataInput &input) {
    this->delayEndTime = input.readDouble();

}

