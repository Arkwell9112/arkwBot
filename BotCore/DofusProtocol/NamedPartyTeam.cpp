#include "NamedPartyTeam.h"

void NamedPartyTeam::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NamedPartyTeam(input);
}

void NamedPartyTeam::deserializeAs_NamedPartyTeam(ICustomDataInput &input) {
    this->_teamIdFunc(input);
    this->_partyNameFunc(input);
}

void NamedPartyTeam::_teamIdFunc(ICustomDataInput &input) {
    this->teamId = input.readByte();

}

void NamedPartyTeam::_partyNameFunc(ICustomDataInput &input) {
    this->partyName = input.readUTF();
}

