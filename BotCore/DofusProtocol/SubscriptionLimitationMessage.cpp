#include "SubscriptionLimitationMessage.h"

void SubscriptionLimitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SubscriptionLimitationMessage(input);
}

void SubscriptionLimitationMessage::deserializeAs_SubscriptionLimitationMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void SubscriptionLimitationMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

