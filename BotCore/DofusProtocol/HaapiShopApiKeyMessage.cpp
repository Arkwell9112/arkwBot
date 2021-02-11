#include "HaapiShopApiKeyMessage.h"

void HaapiShopApiKeyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiShopApiKeyMessage(input);
}

void HaapiShopApiKeyMessage::deserializeAs_HaapiShopApiKeyMessage(ICustomDataInput &input) {
    this->_tokenFunc(input);
}

void HaapiShopApiKeyMessage::_tokenFunc(ICustomDataInput &input) {
    this->token = input.readUTF();
}

