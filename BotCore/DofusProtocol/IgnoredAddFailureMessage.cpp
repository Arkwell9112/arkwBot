#include "IgnoredAddFailureMessage.h"

void IgnoredAddFailureMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredAddFailureMessage(input);
}

void IgnoredAddFailureMessage::deserializeAs_IgnoredAddFailureMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void IgnoredAddFailureMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

