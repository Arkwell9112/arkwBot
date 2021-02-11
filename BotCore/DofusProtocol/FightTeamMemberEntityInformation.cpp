#include "FightTeamMemberEntityInformation.h"

void FightTeamMemberEntityInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamMemberEntityInformation(input);
}

void FightTeamMemberEntityInformation::deserializeAs_FightTeamMemberEntityInformation(ICustomDataInput &input) {
    FightTeamMemberInformations::deserialize(input);
    this->_entityModelIdFunc(input);
    this->_levelFunc(input);
    this->_masterIdFunc(input);
}

void FightTeamMemberEntityInformation::_entityModelIdFunc(ICustomDataInput &input) {
    this->entityModelId = input.readByte();

}

void FightTeamMemberEntityInformation::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void FightTeamMemberEntityInformation::_masterIdFunc(ICustomDataInput &input) {
    this->masterId = input.readDouble();

}

