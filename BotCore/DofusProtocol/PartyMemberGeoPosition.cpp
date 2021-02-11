#include "PartyMemberGeoPosition.h"

void PartyMemberGeoPosition::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberGeoPosition(input);
}

void PartyMemberGeoPosition::deserializeAs_PartyMemberGeoPosition(ICustomDataInput &input) {
    this->_memberIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void PartyMemberGeoPosition::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readInt();

}

void PartyMemberGeoPosition::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void PartyMemberGeoPosition::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void PartyMemberGeoPosition::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void PartyMemberGeoPosition::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

