#include "LocalizedChatSmileyMessage.h"

void LocalizedChatSmileyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LocalizedChatSmileyMessage(input);
}

void LocalizedChatSmileyMessage::deserializeAs_LocalizedChatSmileyMessage(ICustomDataInput &input) {
    ChatSmileyMessage::deserialize(input);
    this->_cellIdFunc(input);
}

void LocalizedChatSmileyMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

