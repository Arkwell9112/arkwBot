#include "ChatClientMultiMessage.h"

void ChatClientMultiMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatClientMultiMessage(input);
}

void ChatClientMultiMessage::deserializeAs_ChatClientMultiMessage(ICustomDataInput &input) {
    ChatAbstractClientMessage::deserialize(input);
    this->_channelFunc(input);
}

void ChatClientMultiMessage::_channelFunc(ICustomDataInput &input) {
    this->channel = input.readByte();

}

