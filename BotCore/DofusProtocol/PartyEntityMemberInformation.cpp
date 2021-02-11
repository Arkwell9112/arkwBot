#include "PartyEntityMemberInformation.h"

void PartyEntityMemberInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyEntityMemberInformation(input);
}

void PartyEntityMemberInformation::deserializeAs_PartyEntityMemberInformation(ICustomDataInput &input) {
    PartyEntityBaseInformation::deserialize(input);
    this->_initiativeFunc(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_prospectingFunc(input);
    this->_regenRateFunc(input);
}

void PartyEntityMemberInformation::_initiativeFunc(ICustomDataInput &input) {
    this->initiative = input.readVarUhShort();

}

void PartyEntityMemberInformation::_lifePointsFunc(ICustomDataInput &input) {
    this->lifePoints = input.readVarUhInt();

}

void PartyEntityMemberInformation::_maxLifePointsFunc(ICustomDataInput &input) {
    this->maxLifePoints = input.readVarUhInt();

}

void PartyEntityMemberInformation::_prospectingFunc(ICustomDataInput &input) {
    this->prospecting = input.readVarUhShort();

}

void PartyEntityMemberInformation::_regenRateFunc(ICustomDataInput &input) {
    this->regenRate = input.readUnsignedByte();

}

