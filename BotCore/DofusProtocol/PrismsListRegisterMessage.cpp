#include "PrismsListRegisterMessage.h"

void PrismsListRegisterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismsListRegisterMessage(input);
}

void PrismsListRegisterMessage::deserializeAs_PrismsListRegisterMessage(ICustomDataInput &input) {
    this->_listenFunc(input);
}

void PrismsListRegisterMessage::_listenFunc(ICustomDataInput &input) {
    this->listen = input.readByte();

}

