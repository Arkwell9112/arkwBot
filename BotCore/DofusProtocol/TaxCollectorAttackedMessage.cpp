#include "TaxCollectorAttackedMessage.h"

void TaxCollectorAttackedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorAttackedMessage(input);
}

void TaxCollectorAttackedMessage::deserializeAs_TaxCollectorAttackedMessage(ICustomDataInput &input) {
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->guild.deserialize(input);
}

void TaxCollectorAttackedMessage::_firstNameIdFunc(ICustomDataInput &input) {
    this->firstNameId = input.readVarUhShort();

}

void TaxCollectorAttackedMessage::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

void TaxCollectorAttackedMessage::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void TaxCollectorAttackedMessage::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void TaxCollectorAttackedMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void TaxCollectorAttackedMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

