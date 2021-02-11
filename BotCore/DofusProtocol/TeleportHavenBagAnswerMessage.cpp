#include "TeleportHavenBagAnswerMessage.h"

void TeleportHavenBagAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportHavenBagAnswerMessage(input);
}

void TeleportHavenBagAnswerMessage::deserializeAs_TeleportHavenBagAnswerMessage(ICustomDataInput &input) {
    this->_acceptFunc(input);
}

void TeleportHavenBagAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

