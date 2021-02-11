#include "GuildInvitationMessage.h"

void GuildInvitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInvitationMessage(input);
}

void GuildInvitationMessage::deserializeAs_GuildInvitationMessage(ICustomDataInput &input) {
    this->_targetIdFunc(input);
}

void GuildInvitationMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readVarUhLong();

}

