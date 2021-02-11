#include "ChatServerCopyMessage.h"

void ChatServerCopyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatServerCopyMessage(input);
}

void ChatServerCopyMessage::deserializeAs_ChatServerCopyMessage(ICustomDataInput &input) {
    ChatAbstractServerMessage::deserialize(input);
    this->_receiverIdFunc(input);
    this->_receiverNameFunc(input);
}

void ChatServerCopyMessage::_receiverIdFunc(ICustomDataInput &input) {
    this->receiverId = input.readVarUhLong();

}

void ChatServerCopyMessage::_receiverNameFunc(ICustomDataInput &input) {
    this->receiverName = input.readUTF();
}

