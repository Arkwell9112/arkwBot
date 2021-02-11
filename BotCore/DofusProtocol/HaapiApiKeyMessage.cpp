#include "HaapiApiKeyMessage.h"

void HaapiApiKeyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiApiKeyMessage(input);
}

void HaapiApiKeyMessage::deserializeAs_HaapiApiKeyMessage(ICustomDataInput &input) {
    this->_tokenFunc(input);
}

void HaapiApiKeyMessage::_tokenFunc(ICustomDataInput &input) {
    this->token = input.readUTF();
}

