#include "EmoteRemoveMessage.h"

void EmoteRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmoteRemoveMessage(input);
}

void EmoteRemoveMessage::deserializeAs_EmoteRemoveMessage(ICustomDataInput &input) {
    this->_emoteIdFunc(input);
}

void EmoteRemoveMessage::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

