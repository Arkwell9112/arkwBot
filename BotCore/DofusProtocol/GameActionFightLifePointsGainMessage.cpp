#include "GameActionFightLifePointsGainMessage.h"

void GameActionFightLifePointsGainMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightLifePointsGainMessage(input);
}

void GameActionFightLifePointsGainMessage::deserializeAs_GameActionFightLifePointsGainMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_deltaFunc(input);
}

void GameActionFightLifePointsGainMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightLifePointsGainMessage::_deltaFunc(ICustomDataInput &input) {
    this->delta = input.readVarUhInt();

}

