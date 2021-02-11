#include "EmotePlayAbstractMessage.h"

void EmotePlayAbstractMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmotePlayAbstractMessage(input);
}

void EmotePlayAbstractMessage::deserializeAs_EmotePlayAbstractMessage(ICustomDataInput &input) {
    this->_emoteIdFunc(input);
    this->_emoteStartTimeFunc(input);
}

void EmotePlayAbstractMessage::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

void EmotePlayAbstractMessage::_emoteStartTimeFunc(ICustomDataInput &input) {
    this->emoteStartTime = input.readDouble();

}

