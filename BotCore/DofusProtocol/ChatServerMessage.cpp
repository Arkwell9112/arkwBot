#include "ChatServerMessage.h"

void ChatServerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatServerMessage(input);
}

void ChatServerMessage::deserializeAs_ChatServerMessage(ICustomDataInput &input) {
    ChatAbstractServerMessage::deserialize(input);
    this->_senderIdFunc(input);
    this->_senderNameFunc(input);
    this->_prefixFunc(input);
    this->_senderAccountIdFunc(input);
}

void ChatServerMessage::_senderIdFunc(ICustomDataInput &input) {
    this->senderId = input.readDouble();

}

void ChatServerMessage::_senderNameFunc(ICustomDataInput &input) {
    this->senderName = input.readUTF();
}

void ChatServerMessage::_prefixFunc(ICustomDataInput &input) {
    this->prefix = input.readUTF();
}

void ChatServerMessage::_senderAccountIdFunc(ICustomDataInput &input) {
    this->senderAccountId = input.readInt();

}

