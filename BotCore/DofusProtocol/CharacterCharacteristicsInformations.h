#ifndef CHARACTERCHARACTERISTICSINFORMATIONS
#define CHARACTERCHARACTERISTICSINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "CharacterSpellModification.h"
#include "CharacterBaseCharacteristic.h"
#include "ActorExtendedAlignmentInformations.h"

class CharacterCharacteristicsInformations : public NetworkInterface {
public:
    double experience = 0;
    double experienceLevelFloor = 0;
    double experienceNextLevelFloor = 0;
    double experienceBonusLimit = 0;
    double kamas = 0;
    unsigned int statsPoints = 0;
    unsigned int additionnalPoints = 0;
    unsigned int spellsPoints = 0;
    ActorExtendedAlignmentInformations alignmentInfos;
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int energyPoints = 0;
    unsigned int maxEnergyPoints = 0;
    int actionPointsCurrent = 0;
    int movementPointsCurrent = 0;
    CharacterBaseCharacteristic initiative;
    CharacterBaseCharacteristic prospecting;
    CharacterBaseCharacteristic actionPoints;
    CharacterBaseCharacteristic movementPoints;
    CharacterBaseCharacteristic strength;
    CharacterBaseCharacteristic vitality;
    CharacterBaseCharacteristic wisdom;
    CharacterBaseCharacteristic chance;
    CharacterBaseCharacteristic agility;
    CharacterBaseCharacteristic intelligence;
    CharacterBaseCharacteristic range;
    CharacterBaseCharacteristic summonableCreaturesBoost;
    CharacterBaseCharacteristic reflect;
    CharacterBaseCharacteristic criticalHit;
    unsigned int criticalHitWeapon = 0;
    CharacterBaseCharacteristic criticalMiss;
    CharacterBaseCharacteristic healBonus;
    CharacterBaseCharacteristic allDamagesBonus;
    CharacterBaseCharacteristic weaponDamagesBonusPercent;
    CharacterBaseCharacteristic damagesBonusPercent;
    CharacterBaseCharacteristic trapBonus;
    CharacterBaseCharacteristic trapBonusPercent;
    CharacterBaseCharacteristic glyphBonusPercent;
    CharacterBaseCharacteristic runeBonusPercent;
    CharacterBaseCharacteristic permanentDamagePercent;
    CharacterBaseCharacteristic tackleBlock;
    CharacterBaseCharacteristic tackleEvade;
    CharacterBaseCharacteristic PAAttack;
    CharacterBaseCharacteristic PMAttack;
    CharacterBaseCharacteristic pushDamageBonus;
    CharacterBaseCharacteristic criticalDamageBonus;
    CharacterBaseCharacteristic neutralDamageBonus;
    CharacterBaseCharacteristic earthDamageBonus;
    CharacterBaseCharacteristic waterDamageBonus;
    CharacterBaseCharacteristic airDamageBonus;
    CharacterBaseCharacteristic fireDamageBonus;
    CharacterBaseCharacteristic dodgePALostProbability;
    CharacterBaseCharacteristic dodgePMLostProbability;
    CharacterBaseCharacteristic neutralElementResistPercent;
    CharacterBaseCharacteristic earthElementResistPercent;
    CharacterBaseCharacteristic waterElementResistPercent;
    CharacterBaseCharacteristic airElementResistPercent;
    CharacterBaseCharacteristic fireElementResistPercent;
    CharacterBaseCharacteristic neutralElementReduction;
    CharacterBaseCharacteristic earthElementReduction;
    CharacterBaseCharacteristic waterElementReduction;
    CharacterBaseCharacteristic airElementReduction;
    CharacterBaseCharacteristic fireElementReduction;
    CharacterBaseCharacteristic pushDamageReduction;
    CharacterBaseCharacteristic criticalDamageReduction;
    CharacterBaseCharacteristic pvpNeutralElementResistPercent;
    CharacterBaseCharacteristic pvpEarthElementResistPercent;
    CharacterBaseCharacteristic pvpWaterElementResistPercent;
    CharacterBaseCharacteristic pvpAirElementResistPercent;
    CharacterBaseCharacteristic pvpFireElementResistPercent;
    CharacterBaseCharacteristic pvpNeutralElementReduction;
    CharacterBaseCharacteristic pvpEarthElementReduction;
    CharacterBaseCharacteristic pvpWaterElementReduction;
    CharacterBaseCharacteristic pvpAirElementReduction;
    CharacterBaseCharacteristic pvpFireElementReduction;
    CharacterBaseCharacteristic meleeDamageDonePercent;
    CharacterBaseCharacteristic meleeDamageReceivedPercent;
    CharacterBaseCharacteristic rangedDamageDonePercent;
    CharacterBaseCharacteristic rangedDamageReceivedPercent;
    CharacterBaseCharacteristic weaponDamageDonePercent;
    CharacterBaseCharacteristic weaponDamageReceivedPercent;
    CharacterBaseCharacteristic spellDamageDonePercent;
    CharacterBaseCharacteristic spellDamageReceivedPercent;
    std::vector<CharacterSpellModification> spellModifications;
    unsigned int probationTime = 0;
    unsigned int protocolId = 322;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCharacteristicsInformations(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _experienceLevelFloorFunc(ICustomDataInput &input);

    void _experienceNextLevelFloorFunc(ICustomDataInput &input);

    void _experienceBonusLimitFunc(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);

    void _statsPointsFunc(ICustomDataInput &input);

    void _additionnalPointsFunc(ICustomDataInput &input);

    void _spellsPointsFunc(ICustomDataInput &input);

    void _lifePointsFunc(ICustomDataInput &input);

    void _maxLifePointsFunc(ICustomDataInput &input);

    void _energyPointsFunc(ICustomDataInput &input);

    void _maxEnergyPointsFunc(ICustomDataInput &input);

    void _actionPointsCurrentFunc(ICustomDataInput &input);

    void _movementPointsCurrentFunc(ICustomDataInput &input);

    void _criticalHitWeaponFunc(ICustomDataInput &input);

    void _spellModificationsFunc(ICustomDataInput &input);

    void _probationTimeFunc(ICustomDataInput &input);
};

#endif