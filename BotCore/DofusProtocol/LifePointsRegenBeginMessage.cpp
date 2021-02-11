#include "LifePointsRegenBeginMessage.h"

void LifePointsRegenBeginMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LifePointsRegenBeginMessage(input);
}

void LifePointsRegenBeginMessage::deserializeAs_LifePointsRegenBeginMessage(ICustomDataInput &input) {
    this->_regenRateFunc(input);
}

void LifePointsRegenBeginMessage::_regenRateFunc(ICustomDataInput &input) {
    this->regenRate = input.readUnsignedByte();

}

