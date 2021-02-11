#include "BasicWhoIsNoMatchMessage.h"

void BasicWhoIsNoMatchMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicWhoIsNoMatchMessage(input);
}

void BasicWhoIsNoMatchMessage::deserializeAs_BasicWhoIsNoMatchMessage(ICustomDataInput &input) {
    this->_searchFunc(input);
}

void BasicWhoIsNoMatchMessage::_searchFunc(ICustomDataInput &input) {
    this->search = input.readUTF();
}

