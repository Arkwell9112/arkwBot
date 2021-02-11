#include "HaapiTokenMessage.h"

void HaapiTokenMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiTokenMessage(input);
}

void HaapiTokenMessage::deserializeAs_HaapiTokenMessage(ICustomDataInput &input) {
    this->_tokenFunc(input);
}

void HaapiTokenMessage::_tokenFunc(ICustomDataInput &input) {
    this->token = input.readUTF();
}

