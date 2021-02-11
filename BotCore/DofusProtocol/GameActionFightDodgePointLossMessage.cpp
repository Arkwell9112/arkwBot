#include "GameActionFightDodgePointLossMessage.h"

void GameActionFightDodgePointLossMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDodgePointLossMessage(input);
}

void GameActionFightDodgePointLossMessage::deserializeAs_GameActionFightDodgePointLossMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_amountFunc(input);
}

void GameActionFightDodgePointLossMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightDodgePointLossMessage::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhShort();

}

