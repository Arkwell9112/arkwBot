#include "ExchangeLeaveMessage.h"

void ExchangeLeaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeLeaveMessage(input);
}

void ExchangeLeaveMessage::deserializeAs_ExchangeLeaveMessage(ICustomDataInput &input) {
    LeaveDialogMessage::deserialize(input);
    this->_successFunc(input);
}

void ExchangeLeaveMessage::_successFunc(ICustomDataInput &input) {
    this->success = input.readBoolean();
}

