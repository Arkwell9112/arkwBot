#include "ChatSmileyRequestMessage.h"

void ChatSmileyRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatSmileyRequestMessage(input);
}

void ChatSmileyRequestMessage::deserializeAs_ChatSmileyRequestMessage(ICustomDataInput &input) {
    this->_smileyIdFunc(input);
}

void ChatSmileyRequestMessage::_smileyIdFunc(ICustomDataInput &input) {
    this->smileyId = input.readVarUhShort();

}

