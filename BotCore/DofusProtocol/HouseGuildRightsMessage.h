#ifndef HOUSEGUILDRIGHTSMESSAGE
#define HOUSEGUILDRIGHTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"

class HouseGuildRightsMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    GuildInformations guildInfo;
    unsigned int rights = 0;
    unsigned int protocolId = 260;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseGuildRightsMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);

    void _rightsFunc(ICustomDataInput &input);
};

#endif