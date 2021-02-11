#include "ChatClientPrivateMessage.h"

void ChatClientPrivateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatClientPrivateMessage(input);
}

void ChatClientPrivateMessage::deserializeAs_ChatClientPrivateMessage(ICustomDataInput &input) {
    ChatAbstractClientMessage::deserialize(input);
    this->_receiverFunc(input);
}

void ChatClientPrivateMessage::_receiverFunc(ICustomDataInput &input) {
    this->receiver = input.readUTF();
}

