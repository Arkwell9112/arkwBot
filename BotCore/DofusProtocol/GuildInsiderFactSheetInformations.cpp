#include "GuildInsiderFactSheetInformations.h"

void GuildInsiderFactSheetInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInsiderFactSheetInformations(input);
}

void GuildInsiderFactSheetInformations::deserializeAs_GuildInsiderFactSheetInformations(ICustomDataInput &input) {
    GuildFactSheetInformations::deserialize(input);
    this->_leaderNameFunc(input);
    this->_nbConnectedMembersFunc(input);
    this->_nbTaxCollectorsFunc(input);
    this->_lastActivityFunc(input);
}

void GuildInsiderFactSheetInformations::_leaderNameFunc(ICustomDataInput &input) {
    this->leaderName = input.readUTF();
}

void GuildInsiderFactSheetInformations::_nbConnectedMembersFunc(ICustomDataInput &input) {
    this->nbConnectedMembers = input.readVarUhShort();

}

void GuildInsiderFactSheetInformations::_nbTaxCollectorsFunc(ICustomDataInput &input) {
    this->nbTaxCollectors = input.readByte();

}

void GuildInsiderFactSheetInformations::_lastActivityFunc(ICustomDataInput &input) {
    this->lastActivity = input.readInt();

}

