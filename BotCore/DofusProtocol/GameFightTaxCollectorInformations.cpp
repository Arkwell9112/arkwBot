#include "GameFightTaxCollectorInformations.h"

void GameFightTaxCollectorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTaxCollectorInformations(input);
}

void GameFightTaxCollectorInformations::deserializeAs_GameFightTaxCollectorInformations(ICustomDataInput &input) {
    GameFightAIInformations::deserialize(input);
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_levelFunc(input);
}

void GameFightTaxCollectorInformations::_firstNameIdFunc(ICustomDataInput &input) {
    this->firstNameId = input.readVarUhShort();

}

void GameFightTaxCollectorInformations::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

void GameFightTaxCollectorInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readUnsignedByte();

}

