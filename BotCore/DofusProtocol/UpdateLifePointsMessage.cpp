#include "UpdateLifePointsMessage.h"

void UpdateLifePointsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateLifePointsMessage(input);
}

void UpdateLifePointsMessage::deserializeAs_UpdateLifePointsMessage(ICustomDataInput &input) {
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
}

void UpdateLifePointsMessage::_lifePointsFunc(ICustomDataInput &input) {
    this->lifePoints = input.readVarUhInt();

}

void UpdateLifePointsMessage::_maxLifePointsFunc(ICustomDataInput &input) {
    this->maxLifePoints = input.readVarUhInt();

}

