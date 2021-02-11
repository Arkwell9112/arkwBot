#ifndef HOUSEINFORMATIONSFORGUILD
#define HOUSEINFORMATIONSFORGUILD

#include "../IO/ICustomDataInput.h"
#include <vector>
#include <string>
#include "HouseInformations.h"

class HouseInformationsForGuild : public HouseInformations {
public:
    unsigned int instanceId = 0;
    bool secondHand = false;
    std::string ownerName;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    std::vector<int> skillListIds;
    unsigned int guildshareParams = 0;
    unsigned int protocolId = 8727;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseInformationsForGuild(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);

    void _ownerNameFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _skillListIdsFunc(ICustomDataInput &input);

    void _guildshareParamsFunc(ICustomDataInput &input);
};

#endif