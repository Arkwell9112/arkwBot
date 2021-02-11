#include "MountDataErrorMessage.h"

void MountDataErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountDataErrorMessage(input);
}

void MountDataErrorMessage::deserializeAs_MountDataErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void MountDataErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

