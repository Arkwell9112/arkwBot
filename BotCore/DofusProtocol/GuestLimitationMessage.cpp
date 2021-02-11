#include "GuestLimitationMessage.h"

void GuestLimitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuestLimitationMessage(input);
}

void GuestLimitationMessage::deserializeAs_GuestLimitationMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void GuestLimitationMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

