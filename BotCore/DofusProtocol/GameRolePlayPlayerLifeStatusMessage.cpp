#include "GameRolePlayPlayerLifeStatusMessage.h"

void GameRolePlayPlayerLifeStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPlayerLifeStatusMessage(input);
}

void GameRolePlayPlayerLifeStatusMessage::deserializeAs_GameRolePlayPlayerLifeStatusMessage(ICustomDataInput &input) {
    this->_stateFunc(input);
    this->_phenixMapIdFunc(input);
}

void GameRolePlayPlayerLifeStatusMessage::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

void GameRolePlayPlayerLifeStatusMessage::_phenixMapIdFunc(ICustomDataInput &input) {
    this->phenixMapId = input.readDouble();

}

