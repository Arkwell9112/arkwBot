#include "../ProtocolTypeManager.h"
#include "PartyMemberInformations.h"

void PartyMemberInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberInformations(input);
}

void PartyMemberInformations::deserializeAs_PartyMemberInformations(ICustomDataInput &input) {
    unsigned int _id12 = 0;
    PartyEntityBaseInformation _item12;
    CharacterBaseInformations::deserialize(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_prospectingFunc(input);
    this->_regenRateFunc(input);
    this->_initiativeFunc(input);
    this->_alignmentSideFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    unsigned int _id11 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id11);
    unsigned int _entitiesLen = input.readUnsignedShort();
    for (unsigned int _i12 = 0; _i12 < _entitiesLen; _i12++) {
        _id12 = input.readUnsignedShort();
        _item12 = ProtocolTypeManager::getObject<PartyEntityBaseInformation>(input, _id12);
        this->entities.push_back(_item12);
    }
}

void PartyMemberInformations::_lifePointsFunc(ICustomDataInput &input) {
    this->lifePoints = input.readVarUhInt();

}

void PartyMemberInformations::_maxLifePointsFunc(ICustomDataInput &input) {
    this->maxLifePoints = input.readVarUhInt();

}

void PartyMemberInformations::_prospectingFunc(ICustomDataInput &input) {
    this->prospecting = input.readVarUhShort();

}

void PartyMemberInformations::_regenRateFunc(ICustomDataInput &input) {
    this->regenRate = input.readUnsignedByte();

}

void PartyMemberInformations::_initiativeFunc(ICustomDataInput &input) {
    this->initiative = input.readVarUhShort();

}

void PartyMemberInformations::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

void PartyMemberInformations::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void PartyMemberInformations::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void PartyMemberInformations::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void PartyMemberInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PartyMemberInformations::_entitiesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    PartyEntityBaseInformation _item = ProtocolTypeManager::getObject<PartyEntityBaseInformation>(input, _id);
    _item.deserialize(input);
    this->entities.push_back(_item);
}

