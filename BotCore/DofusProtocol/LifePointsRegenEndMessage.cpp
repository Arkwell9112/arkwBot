#include "LifePointsRegenEndMessage.h"

void LifePointsRegenEndMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LifePointsRegenEndMessage(input);
}

void LifePointsRegenEndMessage::deserializeAs_LifePointsRegenEndMessage(ICustomDataInput &input) {
    UpdateLifePointsMessage::deserialize(input);
    this->_lifePointsGainedFunc(input);
}

void LifePointsRegenEndMessage::_lifePointsGainedFunc(ICustomDataInput &input) {
    this->lifePointsGained = input.readVarUhInt();

}

