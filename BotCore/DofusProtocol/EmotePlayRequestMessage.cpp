#include "EmotePlayRequestMessage.h"

void EmotePlayRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmotePlayRequestMessage(input);
}

void EmotePlayRequestMessage::deserializeAs_EmotePlayRequestMessage(ICustomDataInput &input) {
    this->_emoteIdFunc(input);
}

void EmotePlayRequestMessage::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

