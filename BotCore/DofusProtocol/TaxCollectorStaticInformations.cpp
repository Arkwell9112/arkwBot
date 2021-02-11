#include "TaxCollectorStaticInformations.h"

void TaxCollectorStaticInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorStaticInformations(input);
}

void TaxCollectorStaticInformations::deserializeAs_TaxCollectorStaticInformations(ICustomDataInput &input) {
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->guildIdentity.deserialize(input);
    this->_callerIdFunc(input);
}

void TaxCollectorStaticInformations::_firstNameIdFunc(ICustomDataInput &input) {
    this->firstNameId = input.readVarUhShort();

}

void TaxCollectorStaticInformations::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

void TaxCollectorStaticInformations::_callerIdFunc(ICustomDataInput &input) {
    this->callerId = input.readVarUhLong();

}

