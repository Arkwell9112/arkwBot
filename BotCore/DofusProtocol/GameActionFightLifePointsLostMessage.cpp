#include "GameActionFightLifePointsLostMessage.h"

void GameActionFightLifePointsLostMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightLifePointsLostMessage(input);
}

void GameActionFightLifePointsLostMessage::deserializeAs_GameActionFightLifePointsLostMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_lossFunc(input);
    this->_permanentDamagesFunc(input);
    this->_elementIdFunc(input);
}

void GameActionFightLifePointsLostMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightLifePointsLostMessage::_lossFunc(ICustomDataInput &input) {
    this->loss = input.readVarUhInt();

}

void GameActionFightLifePointsLostMessage::_permanentDamagesFunc(ICustomDataInput &input) {
    this->permanentDamages = input.readVarUhInt();

}

void GameActionFightLifePointsLostMessage::_elementIdFunc(ICustomDataInput &input) {
    this->elementId = input.readVarInt();
}

