#ifndef GAMEFIGHTMINIMALSTATS
#define GAMEFIGHTMINIMALSTATS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightMinimalStats : public NetworkInterface {
public:
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int baseMaxLifePoints = 0;
    unsigned int permanentDamagePercent = 0;
    unsigned int shieldPoints = 0;
    int actionPoints = 0;
    int maxActionPoints = 0;
    int movementPoints = 0;
    int maxMovementPoints = 0;
    double summoner = 0;
    bool summoned = false;
    int neutralElementResistPercent = 0;
    int earthElementResistPercent = 0;
    int waterElementResistPercent = 0;
    int airElementResistPercent = 0;
    int fireElementResistPercent = 0;
    int neutralElementReduction = 0;
    int earthElementReduction = 0;
    int waterElementReduction = 0;
    int airElementReduction = 0;
    int fireElementReduction = 0;
    int criticalDamageFixedResist = 0;
    int pushDamageFixedResist = 0;
    int pvpNeutralElementResistPercent = 0;
    int pvpEarthElementResistPercent = 0;
    int pvpWaterElementResistPercent = 0;
    int pvpAirElementResistPercent = 0;
    int pvpFireElementResistPercent = 0;
    int pvpNeutralElementReduction = 0;
    int pvpEarthElementReduction = 0;
    int pvpWaterElementReduction = 0;
    int pvpAirElementReduction = 0;
    int pvpFireElementReduction = 0;
    unsigned int dodgePALostProbability = 0;
    unsigned int dodgePMLostProbability = 0;
    int tackleBlock = 0;
    int tackleEvade = 0;
    int fixedDamageReflection = 0;
    unsigned int invisibilityState = 0;
    unsigned int meleeDamageReceivedPercent = 0;
    unsigned int rangedDamageReceivedPercent = 0;
    unsigned int weaponDamageReceivedPercent = 0;
    unsigned int spellDamageReceivedPercent = 0;
    unsigned int protocolId = 7930;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightMinimalStats(ICustomDataInput &input);

    void _lifePointsFunc(ICustomDataInput &input);

    void _maxLifePointsFunc(ICustomDataInput &input);

    void _baseMaxLifePointsFunc(ICustomDataInput &input);

    void _permanentDamagePercentFunc(ICustomDataInput &input);

    void _shieldPointsFunc(ICustomDataInput &input);

    void _actionPointsFunc(ICustomDataInput &input);

    void _maxActionPointsFunc(ICustomDataInput &input);

    void _movementPointsFunc(ICustomDataInput &input);

    void _maxMovementPointsFunc(ICustomDataInput &input);

    void _summonerFunc(ICustomDataInput &input);

    void _summonedFunc(ICustomDataInput &input);

    void _neutralElementResistPercentFunc(ICustomDataInput &input);

    void _earthElementResistPercentFunc(ICustomDataInput &input);

    void _waterElementResistPercentFunc(ICustomDataInput &input);

    void _airElementResistPercentFunc(ICustomDataInput &input);

    void _fireElementResistPercentFunc(ICustomDataInput &input);

    void _neutralElementReductionFunc(ICustomDataInput &input);

    void _earthElementReductionFunc(ICustomDataInput &input);

    void _waterElementReductionFunc(ICustomDataInput &input);

    void _airElementReductionFunc(ICustomDataInput &input);

    void _fireElementReductionFunc(ICustomDataInput &input);

    void _criticalDamageFixedResistFunc(ICustomDataInput &input);

    void _pushDamageFixedResistFunc(ICustomDataInput &input);

    void _pvpNeutralElementResistPercentFunc(ICustomDataInput &input);

    void _pvpEarthElementResistPercentFunc(ICustomDataInput &input);

    void _pvpWaterElementResistPercentFunc(ICustomDataInput &input);

    void _pvpAirElementResistPercentFunc(ICustomDataInput &input);

    void _pvpFireElementResistPercentFunc(ICustomDataInput &input);

    void _pvpNeutralElementReductionFunc(ICustomDataInput &input);

    void _pvpEarthElementReductionFunc(ICustomDataInput &input);

    void _pvpWaterElementReductionFunc(ICustomDataInput &input);

    void _pvpAirElementReductionFunc(ICustomDataInput &input);

    void _pvpFireElementReductionFunc(ICustomDataInput &input);

    void _dodgePALostProbabilityFunc(ICustomDataInput &input);

    void _dodgePMLostProbabilityFunc(ICustomDataInput &input);

    void _tackleBlockFunc(ICustomDataInput &input);

    void _tackleEvadeFunc(ICustomDataInput &input);

    void _fixedDamageReflectionFunc(ICustomDataInput &input);

    void _invisibilityStateFunc(ICustomDataInput &input);

    void _meleeDamageReceivedPercentFunc(ICustomDataInput &input);

    void _rangedDamageReceivedPercentFunc(ICustomDataInput &input);

    void _weaponDamageReceivedPercentFunc(ICustomDataInput &input);

    void _spellDamageReceivedPercentFunc(ICustomDataInput &input);
};

#endif