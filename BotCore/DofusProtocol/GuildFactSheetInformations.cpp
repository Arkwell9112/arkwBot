#include "GuildFactSheetInformations.h"

void GuildFactSheetInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFactSheetInformations(input);
}

void GuildFactSheetInformations::deserializeAs_GuildFactSheetInformations(ICustomDataInput &input) {
    GuildInformations::deserialize(input);
    this->_leaderIdFunc(input);
    this->_nbMembersFunc(input);
}

void GuildFactSheetInformations::_leaderIdFunc(ICustomDataInput &input) {
    this->leaderId = input.readVarUhLong();

}

void GuildFactSheetInformations::_nbMembersFunc(ICustomDataInput &input) {
    this->nbMembers = input.readVarUhShort();

}

