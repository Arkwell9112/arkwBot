#include "GameActionFightStealKamaMessage.h"

void GameActionFightStealKamaMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightStealKamaMessage(input);
}

void GameActionFightStealKamaMessage::deserializeAs_GameActionFightStealKamaMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_amountFunc(input);
}

void GameActionFightStealKamaMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightStealKamaMessage::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhLong();

}

