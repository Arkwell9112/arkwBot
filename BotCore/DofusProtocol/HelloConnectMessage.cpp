#include "HelloConnectMessage.h"

void HelloConnectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HelloConnectMessage(input);
}

void HelloConnectMessage::deserializeAs_HelloConnectMessage(ICustomDataInput &input) {
    int _val2 = 0;
    this->_saltFunc(input);
    unsigned int _keyLen = input.readVarInt();
    for (unsigned int _i2 = 0; _i2 < _keyLen; _i2++) {
        _val2 = input.readByte();
        this->key.push_back(_val2);
    }
}

void HelloConnectMessage::_saltFunc(ICustomDataInput &input) {
    this->salt = input.readUTF();
}

void HelloConnectMessage::_keyFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->key.push_back(_val);
}

