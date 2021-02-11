#include "AbstractFightTeamInformations.h"

void AbstractFightTeamInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractFightTeamInformations(input);
}

void AbstractFightTeamInformations::deserializeAs_AbstractFightTeamInformations(ICustomDataInput &input) {
    this->_teamIdFunc(input);
    this->_leaderIdFunc(input);
    this->_teamSideFunc(input);
    this->_teamTypeIdFunc(input);
    this->_nbWavesFunc(input);
}

void AbstractFightTeamInformations::_teamIdFunc(ICustomDataInput &input) {
    this->teamId = input.readByte();

}

void AbstractFightTeamInformations::_leaderIdFunc(ICustomDataInput &input) {
    this->leaderId = input.readDouble();

}

void AbstractFightTeamInformations::_teamSideFunc(ICustomDataInput &input) {
    this->teamSide = input.readByte();
}

void AbstractFightTeamInformations::_teamTypeIdFunc(ICustomDataInput &input) {
    this->teamTypeId = input.readByte();

}

void AbstractFightTeamInformations::_nbWavesFunc(ICustomDataInput &input) {
    this->nbWaves = input.readByte();

}

