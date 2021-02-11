#include "GameRolePlayArenaRegistrationStatusMessage.h"

void GameRolePlayArenaRegistrationStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaRegistrationStatusMessage(input);
}

void GameRolePlayArenaRegistrationStatusMessage::deserializeAs_GameRolePlayArenaRegistrationStatusMessage(
        ICustomDataInput &input) {
    this->_registeredFunc(input);
    this->_stepFunc(input);
    this->_battleModeFunc(input);
}

void GameRolePlayArenaRegistrationStatusMessage::_registeredFunc(ICustomDataInput &input) {
    this->registered = input.readBoolean();
}

void GameRolePlayArenaRegistrationStatusMessage::_stepFunc(ICustomDataInput &input) {
    this->step = input.readByte();

}

void GameRolePlayArenaRegistrationStatusMessage::_battleModeFunc(ICustomDataInput &input) {
    this->battleMode = input.readInt();

}

