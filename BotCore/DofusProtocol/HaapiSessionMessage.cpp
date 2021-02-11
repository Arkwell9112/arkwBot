#include "HaapiSessionMessage.h"

void HaapiSessionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiSessionMessage(input);
}

void HaapiSessionMessage::deserializeAs_HaapiSessionMessage(ICustomDataInput &input) {
    this->_keyFunc(input);
    this->_typeFunc(input);
}

void HaapiSessionMessage::_keyFunc(ICustomDataInput &input) {
    this->key = input.readUTF();
}

void HaapiSessionMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

