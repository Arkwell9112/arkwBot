#include "ChatAbstractServerMessage.h"

void ChatAbstractServerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatAbstractServerMessage(input);
}

void ChatAbstractServerMessage::deserializeAs_ChatAbstractServerMessage(ICustomDataInput &input) {
    this->_channelFunc(input);
    this->_contentFunc(input);
    this->_timestampFunc(input);
    this->_fingerprintFunc(input);
}

void ChatAbstractServerMessage::_channelFunc(ICustomDataInput &input) {
    this->channel = input.readByte();

}

void ChatAbstractServerMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

void ChatAbstractServerMessage::_timestampFunc(ICustomDataInput &input) {
    this->timestamp = input.readInt();

}

void ChatAbstractServerMessage::_fingerprintFunc(ICustomDataInput &input) {
    this->fingerprint = input.readUTF();
}

