#include "EmotePlayErrorMessage.h"

void EmotePlayErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmotePlayErrorMessage(input);
}

void EmotePlayErrorMessage::deserializeAs_EmotePlayErrorMessage(ICustomDataInput &input) {
    this->_emoteIdFunc(input);
}

void EmotePlayErrorMessage::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

