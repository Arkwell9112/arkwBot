#include "JobBookSubscriptionMessage.h"

void JobBookSubscriptionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobBookSubscriptionMessage(input);
}

void JobBookSubscriptionMessage::deserializeAs_JobBookSubscriptionMessage(ICustomDataInput &input) {
    JobBookSubscription _item1;
    unsigned int _subscriptionsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _subscriptionsLen; _i1++) {
        _item1.deserialize(input);
        this->subscriptions.push_back(_item1);
    }
}

void JobBookSubscriptionMessage::_subscriptionsFunc(ICustomDataInput &input) {
    JobBookSubscription _item;
    _item.deserialize(input);
    this->subscriptions.push_back(_item);
}

