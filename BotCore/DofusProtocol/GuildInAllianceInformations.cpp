#include "GuildInAllianceInformations.h"

void GuildInAllianceInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInAllianceInformations(input);
}

void GuildInAllianceInformations::deserializeAs_GuildInAllianceInformations(ICustomDataInput &input) {
    GuildInformations::deserialize(input);
    this->_nbMembersFunc(input);
    this->_joinDateFunc(input);
}

void GuildInAllianceInformations::_nbMembersFunc(ICustomDataInput &input) {
    this->nbMembers = input.readUnsignedByte();

}

void GuildInAllianceInformations::_joinDateFunc(ICustomDataInput &input) {
    this->joinDate = input.readInt();

}

