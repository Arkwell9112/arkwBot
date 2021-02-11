#include "GameRolePlayArenaRegisterMessage.h"

void GameRolePlayArenaRegisterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaRegisterMessage(input);
}

void GameRolePlayArenaRegisterMessage::deserializeAs_GameRolePlayArenaRegisterMessage(ICustomDataInput &input) {
    this->_battleModeFunc(input);
}

void GameRolePlayArenaRegisterMessage::_battleModeFunc(ICustomDataInput &input) {
    this->battleMode = input.readInt();

}

