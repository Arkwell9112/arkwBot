#ifndef GUILDINFOSUPGRADEMESSAGE
#define GUILDINFOSUPGRADEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GuildInfosUpgradeMessage : public NetworkInterface {
public:
    unsigned int maxTaxCollectorsCount = 0;
    unsigned int taxCollectorsCount = 0;
    unsigned int taxCollectorLifePoints = 0;
    unsigned int taxCollectorDamagesBonuses = 0;
    unsigned int taxCollectorPods = 0;
    unsigned int taxCollectorProspecting = 0;
    unsigned int taxCollectorWisdom = 0;
    unsigned int boostPoints = 0;
    std::vector<unsigned int> spellId;
    std::vector<int> spellLevel;
    unsigned int protocolId = 5735;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInfosUpgradeMessage(ICustomDataInput &input);

    void _maxTaxCollectorsCountFunc(ICustomDataInput &input);

    void _taxCollectorsCountFunc(ICustomDataInput &input);

    void _taxCollectorLifePointsFunc(ICustomDataInput &input);

    void _taxCollectorDamagesBonusesFunc(ICustomDataInput &input);

    void _taxCollectorPodsFunc(ICustomDataInput &input);

    void _taxCollectorProspectingFunc(ICustomDataInput &input);

    void _taxCollectorWisdomFunc(ICustomDataInput &input);

    void _boostPointsFunc(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _spellLevelFunc(ICustomDataInput &input);
};

#endif