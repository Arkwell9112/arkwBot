#include "HaapiBuyValidationMessage.h"

void HaapiBuyValidationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiBuyValidationMessage(input);
}

void HaapiBuyValidationMessage::deserializeAs_HaapiBuyValidationMessage(ICustomDataInput &input) {
    HaapiValidationMessage::deserialize(input);
    this->_amountFunc(input);
    this->_emailFunc(input);
}

void HaapiBuyValidationMessage::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhLong();

}

void HaapiBuyValidationMessage::_emailFunc(ICustomDataInput &input) {
    this->email = input.readUTF();
}

