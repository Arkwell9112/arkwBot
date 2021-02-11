#include "GameFightFighterTaxCollectorLightInformations.h"

void GameFightFighterTaxCollectorLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterTaxCollectorLightInformations(input);
}

void GameFightFighterTaxCollectorLightInformations::deserializeAs_GameFightFighterTaxCollectorLightInformations(
        ICustomDataInput &input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
}

void GameFightFighterTaxCollectorLightInformations::_firstNameIdFunc(ICustomDataInput &input) {
    this->firstNameId = input.readVarUhShort();

}

void GameFightFighterTaxCollectorLightInformations::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

