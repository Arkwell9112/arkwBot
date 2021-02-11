#include "ContactLookErrorMessage.h"

void ContactLookErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ContactLookErrorMessage(input);
}

void ContactLookErrorMessage::deserializeAs_ContactLookErrorMessage(ICustomDataInput &input) {
    this->_requestIdFunc(input);
}

void ContactLookErrorMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readVarUhInt();

}

