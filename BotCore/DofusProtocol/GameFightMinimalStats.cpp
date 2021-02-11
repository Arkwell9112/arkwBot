#include "GameFightMinimalStats.h"

void GameFightMinimalStats::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightMinimalStats(input);
}

void GameFightMinimalStats::deserializeAs_GameFightMinimalStats(ICustomDataInput &input) {
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_baseMaxLifePointsFunc(input);
    this->_permanentDamagePercentFunc(input);
    this->_shieldPointsFunc(input);
    this->_actionPointsFunc(input);
    this->_maxActionPointsFunc(input);
    this->_movementPointsFunc(input);
    this->_maxMovementPointsFunc(input);
    this->_summonerFunc(input);
    this->_summonedFunc(input);
    this->_neutralElementResistPercentFunc(input);
    this->_earthElementResistPercentFunc(input);
    this->_waterElementResistPercentFunc(input);
    this->_airElementResistPercentFunc(input);
    this->_fireElementResistPercentFunc(input);
    this->_neutralElementReductionFunc(input);
    this->_earthElementReductionFunc(input);
    this->_waterElementReductionFunc(input);
    this->_airElementReductionFunc(input);
    this->_fireElementReductionFunc(input);
    this->_criticalDamageFixedResistFunc(input);
    this->_pushDamageFixedResistFunc(input);
    this->_pvpNeutralElementResistPercentFunc(input);
    this->_pvpEarthElementResistPercentFunc(input);
    this->_pvpWaterElementResistPercentFunc(input);
    this->_pvpAirElementResistPercentFunc(input);
    this->_pvpFireElementResistPercentFunc(input);
    this->_pvpNeutralElementReductionFunc(input);
    this->_pvpEarthElementReductionFunc(input);
    this->_pvpWaterElementReductionFunc(input);
    this->_pvpAirElementReductionFunc(input);
    this->_pvpFireElementReductionFunc(input);
    this->_dodgePALostProbabilityFunc(input);
    this->_dodgePMLostProbabilityFunc(input);
    this->_tackleBlockFunc(input);
    this->_tackleEvadeFunc(input);
    this->_fixedDamageReflectionFunc(input);
    this->_invisibilityStateFunc(input);
    this->_meleeDamageReceivedPercentFunc(input);
    this->_rangedDamageReceivedPercentFunc(input);
    this->_weaponDamageReceivedPercentFunc(input);
    this->_spellDamageReceivedPercentFunc(input);
}

void GameFightMinimalStats::_lifePointsFunc(ICustomDataInput &input) {
    this->lifePoints = input.readVarUhInt();

}

void GameFightMinimalStats::_maxLifePointsFunc(ICustomDataInput &input) {
    this->maxLifePoints = input.readVarUhInt();

}

void GameFightMinimalStats::_baseMaxLifePointsFunc(ICustomDataInput &input) {
    this->baseMaxLifePoints = input.readVarUhInt();

}

void GameFightMinimalStats::_permanentDamagePercentFunc(ICustomDataInput &input) {
    this->permanentDamagePercent = input.readVarUhInt();

}

void GameFightMinimalStats::_shieldPointsFunc(ICustomDataInput &input) {
    this->shieldPoints = input.readVarUhInt();

}

void GameFightMinimalStats::_actionPointsFunc(ICustomDataInput &input) {
    this->actionPoints = input.readVarShort();
}

void GameFightMinimalStats::_maxActionPointsFunc(ICustomDataInput &input) {
    this->maxActionPoints = input.readVarShort();
}

void GameFightMinimalStats::_movementPointsFunc(ICustomDataInput &input) {
    this->movementPoints = input.readVarShort();
}

void GameFightMinimalStats::_maxMovementPointsFunc(ICustomDataInput &input) {
    this->maxMovementPoints = input.readVarShort();
}

void GameFightMinimalStats::_summonerFunc(ICustomDataInput &input) {
    this->summoner = input.readDouble();

}

void GameFightMinimalStats::_summonedFunc(ICustomDataInput &input) {
    this->summoned = input.readBoolean();
}

void GameFightMinimalStats::_neutralElementResistPercentFunc(ICustomDataInput &input) {
    this->neutralElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_earthElementResistPercentFunc(ICustomDataInput &input) {
    this->earthElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_waterElementResistPercentFunc(ICustomDataInput &input) {
    this->waterElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_airElementResistPercentFunc(ICustomDataInput &input) {
    this->airElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_fireElementResistPercentFunc(ICustomDataInput &input) {
    this->fireElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_neutralElementReductionFunc(ICustomDataInput &input) {
    this->neutralElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_earthElementReductionFunc(ICustomDataInput &input) {
    this->earthElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_waterElementReductionFunc(ICustomDataInput &input) {
    this->waterElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_airElementReductionFunc(ICustomDataInput &input) {
    this->airElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_fireElementReductionFunc(ICustomDataInput &input) {
    this->fireElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_criticalDamageFixedResistFunc(ICustomDataInput &input) {
    this->criticalDamageFixedResist = input.readVarShort();
}

void GameFightMinimalStats::_pushDamageFixedResistFunc(ICustomDataInput &input) {
    this->pushDamageFixedResist = input.readVarShort();
}

void GameFightMinimalStats::_pvpNeutralElementResistPercentFunc(ICustomDataInput &input) {
    this->pvpNeutralElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_pvpEarthElementResistPercentFunc(ICustomDataInput &input) {
    this->pvpEarthElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_pvpWaterElementResistPercentFunc(ICustomDataInput &input) {
    this->pvpWaterElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_pvpAirElementResistPercentFunc(ICustomDataInput &input) {
    this->pvpAirElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_pvpFireElementResistPercentFunc(ICustomDataInput &input) {
    this->pvpFireElementResistPercent = input.readVarShort();
}

void GameFightMinimalStats::_pvpNeutralElementReductionFunc(ICustomDataInput &input) {
    this->pvpNeutralElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_pvpEarthElementReductionFunc(ICustomDataInput &input) {
    this->pvpEarthElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_pvpWaterElementReductionFunc(ICustomDataInput &input) {
    this->pvpWaterElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_pvpAirElementReductionFunc(ICustomDataInput &input) {
    this->pvpAirElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_pvpFireElementReductionFunc(ICustomDataInput &input) {
    this->pvpFireElementReduction = input.readVarShort();
}

void GameFightMinimalStats::_dodgePALostProbabilityFunc(ICustomDataInput &input) {
    this->dodgePALostProbability = input.readVarUhShort();

}

void GameFightMinimalStats::_dodgePMLostProbabilityFunc(ICustomDataInput &input) {
    this->dodgePMLostProbability = input.readVarUhShort();

}

void GameFightMinimalStats::_tackleBlockFunc(ICustomDataInput &input) {
    this->tackleBlock = input.readVarShort();
}

void GameFightMinimalStats::_tackleEvadeFunc(ICustomDataInput &input) {
    this->tackleEvade = input.readVarShort();
}

void GameFightMinimalStats::_fixedDamageReflectionFunc(ICustomDataInput &input) {
    this->fixedDamageReflection = input.readVarShort();
}

void GameFightMinimalStats::_invisibilityStateFunc(ICustomDataInput &input) {
    this->invisibilityState = input.readByte();

}

void GameFightMinimalStats::_meleeDamageReceivedPercentFunc(ICustomDataInput &input) {
    this->meleeDamageReceivedPercent = input.readVarUhShort();

}

void GameFightMinimalStats::_rangedDamageReceivedPercentFunc(ICustomDataInput &input) {
    this->rangedDamageReceivedPercent = input.readVarUhShort();

}

void GameFightMinimalStats::_weaponDamageReceivedPercentFunc(ICustomDataInput &input) {
    this->weaponDamageReceivedPercent = input.readVarUhShort();

}

void GameFightMinimalStats::_spellDamageReceivedPercentFunc(ICustomDataInput &input) {
    this->spellDamageReceivedPercent = input.readVarUhShort();

}

