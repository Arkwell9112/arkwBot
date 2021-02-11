#include "AllianceVersatileInformations.h"

void AllianceVersatileInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceVersatileInformations(input);
}

void AllianceVersatileInformations::deserializeAs_AllianceVersatileInformations(ICustomDataInput &input) {
    this->_allianceIdFunc(input);
    this->_nbGuildsFunc(input);
    this->_nbMembersFunc(input);
    this->_nbSubareaFunc(input);
}

void AllianceVersatileInformations::_allianceIdFunc(ICustomDataInput &input) {
    this->allianceId = input.readVarUhInt();

}

void AllianceVersatileInformations::_nbGuildsFunc(ICustomDataInput &input) {
    this->nbGuilds = input.readVarUhShort();

}

void AllianceVersatileInformations::_nbMembersFunc(ICustomDataInput &input) {
    this->nbMembers = input.readVarUhShort();

}

void AllianceVersatileInformations::_nbSubareaFunc(ICustomDataInput &input) {
    this->nbSubarea = input.readVarUhShort();

}

