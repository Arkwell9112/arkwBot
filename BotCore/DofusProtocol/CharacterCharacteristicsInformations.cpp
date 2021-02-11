#include "CharacterCharacteristicsInformations.h"

void CharacterCharacteristicsInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterCharacteristicsInformations(input);
}

void CharacterCharacteristicsInformations::deserializeAs_CharacterCharacteristicsInformations(ICustomDataInput &input) {
    CharacterSpellModification _item84;
    this->_experienceFunc(input);
    this->_experienceLevelFloorFunc(input);
    this->_experienceNextLevelFloorFunc(input);
    this->_experienceBonusLimitFunc(input);
    this->_kamasFunc(input);
    this->_statsPointsFunc(input);
    this->_additionnalPointsFunc(input);
    this->_spellsPointsFunc(input);
    this->alignmentInfos.deserialize(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_energyPointsFunc(input);
    this->_maxEnergyPointsFunc(input);
    this->_actionPointsCurrentFunc(input);
    this->_movementPointsCurrentFunc(input);
    this->initiative.deserialize(input);
    this->prospecting.deserialize(input);
    this->actionPoints.deserialize(input);
    this->movementPoints.deserialize(input);
    this->strength.deserialize(input);
    this->vitality.deserialize(input);
    this->wisdom.deserialize(input);
    this->chance.deserialize(input);
    this->agility.deserialize(input);
    this->intelligence.deserialize(input);
    this->range.deserialize(input);
    this->summonableCreaturesBoost.deserialize(input);
    this->reflect.deserialize(input);
    this->criticalHit.deserialize(input);
    this->_criticalHitWeaponFunc(input);
    this->criticalMiss.deserialize(input);
    this->healBonus.deserialize(input);
    this->allDamagesBonus.deserialize(input);
    this->weaponDamagesBonusPercent.deserialize(input);
    this->damagesBonusPercent.deserialize(input);
    this->trapBonus.deserialize(input);
    this->trapBonusPercent.deserialize(input);
    this->glyphBonusPercent.deserialize(input);
    this->runeBonusPercent.deserialize(input);
    this->permanentDamagePercent.deserialize(input);
    this->tackleBlock.deserialize(input);
    this->tackleEvade.deserialize(input);
    this->PAAttack.deserialize(input);
    this->PMAttack.deserialize(input);
    this->pushDamageBonus.deserialize(input);
    this->criticalDamageBonus.deserialize(input);
    this->neutralDamageBonus.deserialize(input);
    this->earthDamageBonus.deserialize(input);
    this->waterDamageBonus.deserialize(input);
    this->airDamageBonus.deserialize(input);
    this->fireDamageBonus.deserialize(input);
    this->dodgePALostProbability.deserialize(input);
    this->dodgePMLostProbability.deserialize(input);
    this->neutralElementResistPercent.deserialize(input);
    this->earthElementResistPercent.deserialize(input);
    this->waterElementResistPercent.deserialize(input);
    this->airElementResistPercent.deserialize(input);
    this->fireElementResistPercent.deserialize(input);
    this->neutralElementReduction.deserialize(input);
    this->earthElementReduction.deserialize(input);
    this->waterElementReduction.deserialize(input);
    this->airElementReduction.deserialize(input);
    this->fireElementReduction.deserialize(input);
    this->pushDamageReduction.deserialize(input);
    this->criticalDamageReduction.deserialize(input);
    this->pvpNeutralElementResistPercent.deserialize(input);
    this->pvpEarthElementResistPercent.deserialize(input);
    this->pvpWaterElementResistPercent.deserialize(input);
    this->pvpAirElementResistPercent.deserialize(input);
    this->pvpFireElementResistPercent.deserialize(input);
    this->pvpNeutralElementReduction.deserialize(input);
    this->pvpEarthElementReduction.deserialize(input);
    this->pvpWaterElementReduction.deserialize(input);
    this->pvpAirElementReduction.deserialize(input);
    this->pvpFireElementReduction.deserialize(input);
    this->meleeDamageDonePercent.deserialize(input);
    this->meleeDamageReceivedPercent.deserialize(input);
    this->rangedDamageDonePercent.deserialize(input);
    this->rangedDamageReceivedPercent.deserialize(input);
    this->weaponDamageDonePercent.deserialize(input);
    this->weaponDamageReceivedPercent.deserialize(input);
    this->spellDamageDonePercent.deserialize(input);
    this->spellDamageReceivedPercent.deserialize(input);
    unsigned int _spellModificationsLen = input.readUnsignedShort();
    for (unsigned int _i84 = 0; _i84 < _spellModificationsLen; _i84++) {
        _item84.deserialize(input);
        this->spellModifications.push_back(_item84);
    }
    this->_probationTimeFunc(input);
}

void CharacterCharacteristicsInformations::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhLong();

}

void CharacterCharacteristicsInformations::_experienceLevelFloorFunc(ICustomDataInput &input) {
    this->experienceLevelFloor = input.readVarUhLong();

}

void CharacterCharacteristicsInformations::_experienceNextLevelFloorFunc(ICustomDataInput &input) {
    this->experienceNextLevelFloor = input.readVarUhLong();

}

void CharacterCharacteristicsInformations::_experienceBonusLimitFunc(ICustomDataInput &input) {
    this->experienceBonusLimit = input.readVarUhLong();

}

void CharacterCharacteristicsInformations::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

void CharacterCharacteristicsInformations::_statsPointsFunc(ICustomDataInput &input) {
    this->statsPoints = input.readVarUhShort();

}

void CharacterCharacteristicsInformations::_additionnalPointsFunc(ICustomDataInput &input) {
    this->additionnalPoints = input.readVarUhShort();

}

void CharacterCharacteristicsInformations::_spellsPointsFunc(ICustomDataInput &input) {
    this->spellsPoints = input.readVarUhShort();

}

void CharacterCharacteristicsInformations::_lifePointsFunc(ICustomDataInput &input) {
    this->lifePoints = input.readVarUhInt();

}

void CharacterCharacteristicsInformations::_maxLifePointsFunc(ICustomDataInput &input) {
    this->maxLifePoints = input.readVarUhInt();

}

void CharacterCharacteristicsInformations::_energyPointsFunc(ICustomDataInput &input) {
    this->energyPoints = input.readVarUhShort();

}

void CharacterCharacteristicsInformations::_maxEnergyPointsFunc(ICustomDataInput &input) {
    this->maxEnergyPoints = input.readVarUhShort();

}

void CharacterCharacteristicsInformations::_actionPointsCurrentFunc(ICustomDataInput &input) {
    this->actionPointsCurrent = input.readVarShort();
}

void CharacterCharacteristicsInformations::_movementPointsCurrentFunc(ICustomDataInput &input) {
    this->movementPointsCurrent = input.readVarShort();
}

void CharacterCharacteristicsInformations::_criticalHitWeaponFunc(ICustomDataInput &input) {
    this->criticalHitWeapon = input.readVarUhShort();

}

void CharacterCharacteristicsInformations::_spellModificationsFunc(ICustomDataInput &input) {
    CharacterSpellModification _item;
    _item.deserialize(input);
    this->spellModifications.push_back(_item);
}

void CharacterCharacteristicsInformations::_probationTimeFunc(ICustomDataInput &input) {
    this->probationTime = input.readInt();

}

