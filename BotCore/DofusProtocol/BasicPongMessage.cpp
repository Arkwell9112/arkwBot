#include "BasicPongMessage.h"

void BasicPongMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicPongMessage(input);
}

void BasicPongMessage::deserializeAs_BasicPongMessage(ICustomDataInput &input) {
    this->_quietFunc(input);
}

void BasicPongMessage::_quietFunc(ICustomDataInput &input) {
    this->quiet = input.readBoolean();
}

