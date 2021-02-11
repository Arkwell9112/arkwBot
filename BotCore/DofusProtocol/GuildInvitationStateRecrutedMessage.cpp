#include "GuildInvitationStateRecrutedMessage.h"

void GuildInvitationStateRecrutedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInvitationStateRecrutedMessage(input);
}

void GuildInvitationStateRecrutedMessage::deserializeAs_GuildInvitationStateRecrutedMessage(ICustomDataInput &input) {
    this->_invitationStateFunc(input);
}

void GuildInvitationStateRecrutedMessage::_invitationStateFunc(ICustomDataInput &input) {
    this->invitationState = input.readByte();

}

