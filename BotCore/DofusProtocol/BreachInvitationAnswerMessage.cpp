#include "BreachInvitationAnswerMessage.h"

void BreachInvitationAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachInvitationAnswerMessage(input);
}

void BreachInvitationAnswerMessage::deserializeAs_BreachInvitationAnswerMessage(ICustomDataInput &input) {
    this->_acceptFunc(input);
}

void BreachInvitationAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

