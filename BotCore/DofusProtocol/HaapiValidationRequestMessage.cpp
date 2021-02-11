#include "HaapiValidationRequestMessage.h"

void HaapiValidationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiValidationRequestMessage(input);
}

void HaapiValidationRequestMessage::deserializeAs_HaapiValidationRequestMessage(ICustomDataInput &input) {
    this->_transactionFunc(input);
}

void HaapiValidationRequestMessage::_transactionFunc(ICustomDataInput &input) {
    this->transaction = input.readUTF();
}

