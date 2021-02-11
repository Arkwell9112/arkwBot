#include "JobAllowMultiCraftRequestMessage.h"

void JobAllowMultiCraftRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobAllowMultiCraftRequestMessage(input);
}

void JobAllowMultiCraftRequestMessage::deserializeAs_JobAllowMultiCraftRequestMessage(ICustomDataInput &input) {
    this->_enabledFunc(input);
}

void JobAllowMultiCraftRequestMessage::_enabledFunc(ICustomDataInput &input) {
    this->enabled = input.readBoolean();
}

