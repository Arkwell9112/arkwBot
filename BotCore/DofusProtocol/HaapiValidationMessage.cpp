#include "HaapiValidationMessage.h"

void HaapiValidationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiValidationMessage(input);
}

void HaapiValidationMessage::deserializeAs_HaapiValidationMessage(ICustomDataInput &input) {
    this->_actionFunc(input);
    this->_codeFunc(input);
}

void HaapiValidationMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

void HaapiValidationMessage::_codeFunc(ICustomDataInput &input) {
    this->code = input.readByte();

}

