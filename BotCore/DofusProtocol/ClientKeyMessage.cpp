#include "ClientKeyMessage.h"

void ClientKeyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ClientKeyMessage(input);
}

void ClientKeyMessage::deserializeAs_ClientKeyMessage(ICustomDataInput &input) {
    this->_keyFunc(input);
}

void ClientKeyMessage::_keyFunc(ICustomDataInput &input) {
    this->key = input.readUTF();
}

