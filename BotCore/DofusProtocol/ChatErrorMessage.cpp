#include "ChatErrorMessage.h"

void ChatErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatErrorMessage(input);
}

void ChatErrorMessage::deserializeAs_ChatErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void ChatErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

