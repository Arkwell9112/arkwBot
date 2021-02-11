#include "BasicPingMessage.h"

void BasicPingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicPingMessage(input);
}

void BasicPingMessage::deserializeAs_BasicPingMessage(ICustomDataInput &input) {
    this->_quietFunc(input);
}

void BasicPingMessage::_quietFunc(ICustomDataInput &input) {
    this->quiet = input.readBoolean();
}

