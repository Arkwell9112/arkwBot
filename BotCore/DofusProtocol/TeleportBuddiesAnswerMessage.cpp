#include "TeleportBuddiesAnswerMessage.h"

void TeleportBuddiesAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportBuddiesAnswerMessage(input);
}

void TeleportBuddiesAnswerMessage::deserializeAs_TeleportBuddiesAnswerMessage(ICustomDataInput &input) {
    this->_acceptFunc(input);
}

void TeleportBuddiesAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

