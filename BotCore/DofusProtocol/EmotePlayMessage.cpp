#include "EmotePlayMessage.h"

void EmotePlayMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EmotePlayMessage(input);
}

void EmotePlayMessage::deserializeAs_EmotePlayMessage(ICustomDataInput &input) {
    EmotePlayAbstractMessage::deserialize(input);
    this->_actorIdFunc(input);
    this->_accountIdFunc(input);
}

void EmotePlayMessage::_actorIdFunc(ICustomDataInput &input) {
    this->actorId = input.readDouble();

}

void EmotePlayMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

