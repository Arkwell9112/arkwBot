#include "PartyInvitationMemberInformations.h"

void PartyInvitationMemberInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationMemberInformations(input);
}

void PartyInvitationMemberInformations::deserializeAs_PartyInvitationMemberInformations(ICustomDataInput &input) {
    PartyEntityBaseInformation _item5;
    CharacterBaseInformations::deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    unsigned int _entitiesLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _entitiesLen; _i5++) {
        _item5.deserialize(input);
        this->entities.push_back(_item5);
    }
}

void PartyInvitationMemberInformations::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void PartyInvitationMemberInformations::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void PartyInvitationMemberInformations::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void PartyInvitationMemberInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PartyInvitationMemberInformations::_entitiesFunc(ICustomDataInput &input) {
    PartyEntityBaseInformation _item;
    _item.deserialize(input);
    this->entities.push_back(_item);
}

