#include "GuildInvitationAnswerMessage.h"

void GuildInvitationAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInvitationAnswerMessage(input);
}

void GuildInvitationAnswerMessage::deserializeAs_GuildInvitationAnswerMessage(ICustomDataInput &input) {
    this->_acceptFunc(input);
}

void GuildInvitationAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

