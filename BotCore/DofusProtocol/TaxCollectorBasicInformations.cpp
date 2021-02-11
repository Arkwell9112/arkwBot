#include "TaxCollectorBasicInformations.h"

void TaxCollectorBasicInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorBasicInformations(input);
}

void TaxCollectorBasicInformations::deserializeAs_TaxCollectorBasicInformations(ICustomDataInput &input) {
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void TaxCollectorBasicInformations::_firstNameIdFunc(ICustomDataInput &input) {
    this->firstNameId = input.readVarUhShort();

}

void TaxCollectorBasicInformations::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

void TaxCollectorBasicInformations::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void TaxCollectorBasicInformations::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void TaxCollectorBasicInformations::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void TaxCollectorBasicInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

