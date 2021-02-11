#include "GuildVersatileInformations.h"

void GuildVersatileInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildVersatileInformations(input);
}

void GuildVersatileInformations::deserializeAs_GuildVersatileInformations(ICustomDataInput &input) {
    this->_guildIdFunc(input);
    this->_leaderIdFunc(input);
    this->_guildLevelFunc(input);
    this->_nbMembersFunc(input);
}

void GuildVersatileInformations::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

void GuildVersatileInformations::_leaderIdFunc(ICustomDataInput &input) {
    this->leaderId = input.readVarUhLong();

}

void GuildVersatileInformations::_guildLevelFunc(ICustomDataInput &input) {
    this->guildLevel = input.readUnsignedByte();

}

void GuildVersatileInformations::_nbMembersFunc(ICustomDataInput &input) {
    this->nbMembers = input.readUnsignedByte();

}

