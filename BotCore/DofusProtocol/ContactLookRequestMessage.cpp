#include "ContactLookRequestMessage.h"

void ContactLookRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ContactLookRequestMessage(input);
}

void ContactLookRequestMessage::deserializeAs_ContactLookRequestMessage(ICustomDataInput &input) {
    this->_requestIdFunc(input);
    this->_contactTypeFunc(input);
}

void ContactLookRequestMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readUnsignedByte();

}

void ContactLookRequestMessage::_contactTypeFunc(ICustomDataInput &input) {
    this->contactType = input.readByte();

}

