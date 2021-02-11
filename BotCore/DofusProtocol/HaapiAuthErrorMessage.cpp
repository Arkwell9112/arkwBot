#include "HaapiAuthErrorMessage.h"

void HaapiAuthErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiAuthErrorMessage(input);
}

void HaapiAuthErrorMessage::deserializeAs_HaapiAuthErrorMessage(ICustomDataInput &input) {
    this->_typeFunc(input);
}

void HaapiAuthErrorMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

