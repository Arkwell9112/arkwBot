#ifndef MOUNTCLIENTDATA
#define MOUNTCLIENTDATA

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"

class MountClientData : public NetworkInterface {
public:
    double id = 0;
    unsigned int model = 0;
    std::vector<unsigned int> ancestor;
    std::vector<unsigned int> behaviors;
    std::string name;
    bool sex = false;
    unsigned int ownerId = 0;
    double experience = 0;
    double experienceForLevel = 0;
    double experienceForNextLevel = 0;
    unsigned int level = 0;
    bool isRideable = false;
    unsigned int maxPods = 0;
    bool isWild = false;
    unsigned int stamina = 0;
    unsigned int staminaMax = 0;
    unsigned int maturity = 0;
    unsigned int maturityForAdult = 0;
    unsigned int energy = 0;
    unsigned int energyMax = 0;
    int serenity = 0;
    int aggressivityMax = 0;
    unsigned int serenityMax = 0;
    unsigned int love = 0;
    unsigned int loveMax = 0;
    int fecondationTime = 0;
    bool isFecondationReady = false;
    unsigned int boostLimiter = 0;
    double boostMax = 0;
    int reproductionCount = 0;
    unsigned int reproductionCountMax = 0;
    unsigned int harnessGID = 0;
    bool useHarnessColors = false;
    std::vector<ObjectEffectInteger> effectList;
    unsigned int protocolId = 3424;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountClientData(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _modelFunc(ICustomDataInput &input);

    void _ancestorFunc(ICustomDataInput &input);

    void _behaviorsFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _ownerIdFunc(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _experienceForLevelFunc(ICustomDataInput &input);

    void _experienceForNextLevelFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _maxPodsFunc(ICustomDataInput &input);

    void _staminaFunc(ICustomDataInput &input);

    void _staminaMaxFunc(ICustomDataInput &input);

    void _maturityFunc(ICustomDataInput &input);

    void _maturityForAdultFunc(ICustomDataInput &input);

    void _energyFunc(ICustomDataInput &input);

    void _energyMaxFunc(ICustomDataInput &input);

    void _serenityFunc(ICustomDataInput &input);

    void _aggressivityMaxFunc(ICustomDataInput &input);

    void _serenityMaxFunc(ICustomDataInput &input);

    void _loveFunc(ICustomDataInput &input);

    void _loveMaxFunc(ICustomDataInput &input);

    void _fecondationTimeFunc(ICustomDataInput &input);

    void _boostLimiterFunc(ICustomDataInput &input);

    void _boostMaxFunc(ICustomDataInput &input);

    void _reproductionCountFunc(ICustomDataInput &input);

    void _reproductionCountMaxFunc(ICustomDataInput &input);

    void _harnessGIDFunc(ICustomDataInput &input);

    void _effectListFunc(ICustomDataInput &input);
};

#endif