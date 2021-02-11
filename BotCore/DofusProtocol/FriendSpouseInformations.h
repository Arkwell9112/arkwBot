#ifndef FRIENDSPOUSEINFORMATIONS
#define FRIENDSPOUSEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "GuildInformations.h"
#include "EntityLook.h"

class FriendSpouseInformations : public NetworkInterface {
public:
    unsigned int spouseAccountId = 0;
    double spouseId = 0;
    std::string spouseName;
    unsigned int spouseLevel = 0;
    int breed = 0;
    int sex = 0;
    EntityLook spouseEntityLook;
    GuildInformations guildInfo;
    int alignmentSide = 0;
    unsigned int protocolId = 9044;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSpouseInformations(ICustomDataInput &input);

    void _spouseAccountIdFunc(ICustomDataInput &input);

    void _spouseIdFunc(ICustomDataInput &input);

    void _spouseNameFunc(ICustomDataInput &input);

    void _spouseLevelFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);
};

#endif