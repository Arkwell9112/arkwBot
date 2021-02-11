#include "ChatAbstractClientMessage.h"

void ChatAbstractClientMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatAbstractClientMessage(input);
}

void ChatAbstractClientMessage::deserializeAs_ChatAbstractClientMessage(ICustomDataInput &input) {
    this->_contentFunc(input);
}

void ChatAbstractClientMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

