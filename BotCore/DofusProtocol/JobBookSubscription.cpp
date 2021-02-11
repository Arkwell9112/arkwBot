#include "JobBookSubscription.h"

void JobBookSubscription::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobBookSubscription(input);
}

void JobBookSubscription::deserializeAs_JobBookSubscription(ICustomDataInput &input) {
    this->_jobIdFunc(input);
    this->_subscribedFunc(input);
}

void JobBookSubscription::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

void JobBookSubscription::_subscribedFunc(ICustomDataInput &input) {
    this->subscribed = input.readBoolean();
}

