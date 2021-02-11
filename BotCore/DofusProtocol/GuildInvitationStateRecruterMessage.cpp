#include "GuildInvitationStateRecruterMessage.h"

void GuildInvitationStateRecruterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInvitationStateRecruterMessage(input);
}

void GuildInvitationStateRecruterMessage::deserializeAs_GuildInvitationStateRecruterMessage(ICustomDataInput &input) {
    this->_recrutedNameFunc(input);
    this->_invitationStateFunc(input);
}

void GuildInvitationStateRecruterMessage::_recrutedNameFunc(ICustomDataInput &input) {
    this->recrutedName = input.readUTF();
}

void GuildInvitationStateRecruterMessage::_invitationStateFunc(ICustomDataInput &input) {
    this->invitationState = input.readByte();

}

