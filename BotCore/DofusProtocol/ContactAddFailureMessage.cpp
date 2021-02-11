#include "ContactAddFailureMessage.h"

void ContactAddFailureMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ContactAddFailureMessage(input);
}

void ContactAddFailureMessage::deserializeAs_ContactAddFailureMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void ContactAddFailureMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

