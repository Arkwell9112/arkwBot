#include "GameActionFightReduceDamagesMessage.h"

void GameActionFightReduceDamagesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightReduceDamagesMessage(input);
}

void GameActionFightReduceDamagesMessage::deserializeAs_GameActionFightReduceDamagesMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_amountFunc(input);
}

void GameActionFightReduceDamagesMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightReduceDamagesMessage::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhInt();

}

