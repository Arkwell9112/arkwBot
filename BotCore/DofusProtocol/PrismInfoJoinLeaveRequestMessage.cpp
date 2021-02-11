#include "PrismInfoJoinLeaveRequestMessage.h"

void PrismInfoJoinLeaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismInfoJoinLeaveRequestMessage(input);
}

void PrismInfoJoinLeaveRequestMessage::deserializeAs_PrismInfoJoinLeaveRequestMessage(ICustomDataInput &input) {
    this->_joinFunc(input);
}

void PrismInfoJoinLeaveRequestMessage::_joinFunc(ICustomDataInput &input) {
    this->join = input.readBoolean();
}

