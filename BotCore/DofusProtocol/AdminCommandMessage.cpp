#include "AdminCommandMessage.h"

void AdminCommandMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AdminCommandMessage(input);
}

void AdminCommandMessage::deserializeAs_AdminCommandMessage(ICustomDataInput &input) {
    this->_contentFunc(input);
}

void AdminCommandMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

