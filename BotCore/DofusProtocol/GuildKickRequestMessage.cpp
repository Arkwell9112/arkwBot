#include "GuildKickRequestMessage.h"

void GuildKickRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildKickRequestMessage(input);
}

void GuildKickRequestMessage::deserializeAs_GuildKickRequestMessage(ICustomDataInput &input) {
    this->_kickedIdFunc(input);
}

void GuildKickRequestMessage::_kickedIdFunc(ICustomDataInput &input) {
    this->kickedId = input.readVarUhLong();

}

