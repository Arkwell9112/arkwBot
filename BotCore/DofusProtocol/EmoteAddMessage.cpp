#include "EmoteAddMessage.h"

void EmoteAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmoteAddMessage(input);
}

void EmoteAddMessage::deserializeAs_EmoteAddMessage(ICustomDataInput &input) {
    this->_emoteIdFunc(input);
}

void EmoteAddMessage::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

