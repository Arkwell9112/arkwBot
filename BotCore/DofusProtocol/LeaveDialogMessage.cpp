#include "LeaveDialogMessage.h"

void LeaveDialogMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LeaveDialogMessage(input);
}

void LeaveDialogMessage::deserializeAs_LeaveDialogMessage(ICustomDataInput &input) {
    this->_dialogTypeFunc(input);
}

void LeaveDialogMessage::_dialogTypeFunc(ICustomDataInput &input) {
    this->dialogType = input.readByte();

}

