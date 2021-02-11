#include "SubscriptionZoneMessage.h"

void SubscriptionZoneMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SubscriptionZoneMessage(input);
}

void SubscriptionZoneMessage::deserializeAs_SubscriptionZoneMessage(ICustomDataInput &input) {
    this->_activeFunc(input);
}

void SubscriptionZoneMessage::_activeFunc(ICustomDataInput &input) {
    this->active = input.readBoolean();
}

