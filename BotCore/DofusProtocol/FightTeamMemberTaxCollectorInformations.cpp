#include "FightTeamMemberTaxCollectorInformations.h"

void FightTeamMemberTaxCollectorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamMemberTaxCollectorInformations(input);
}

void FightTeamMemberTaxCollectorInformations::deserializeAs_FightTeamMemberTaxCollectorInformations(
        ICustomDataInput &input) {
    FightTeamMemberInformations::deserialize(input);
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_levelFunc(input);
    this->_guildIdFunc(input);
    this->_uidFunc(input);
}

void FightTeamMemberTaxCollectorInformations::_firstNameIdFunc(ICustomDataInput &input) {
    this->firstNameId = input.readVarUhShort();

}

void FightTeamMemberTaxCollectorInformations::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

void FightTeamMemberTaxCollectorInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readUnsignedByte();

}

void FightTeamMemberTaxCollectorInformations::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

void FightTeamMemberTaxCollectorInformations::_uidFunc(ICustomDataInput &input) {
    this->uid = input.readDouble();

}

