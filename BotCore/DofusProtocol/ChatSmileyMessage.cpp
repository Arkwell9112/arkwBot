#include "ChatSmileyMessage.h"

void ChatSmileyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatSmileyMessage(input);
}

void ChatSmileyMessage::deserializeAs_ChatSmileyMessage(ICustomDataInput &input) {
    this->_entityIdFunc(input);
    this->_smileyIdFunc(input);
    this->_accountIdFunc(input);
}

void ChatSmileyMessage::_entityIdFunc(ICustomDataInput &input) {
    this->entityId = input.readDouble();

}

void ChatSmileyMessage::_smileyIdFunc(ICustomDataInput &input) {
    this->smileyId = input.readVarUhShort();

}

void ChatSmileyMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

