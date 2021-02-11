#ifndef ALLIANCECHANGEGUILDRIGHTSMESSAGE
#define ALLIANCECHANGEGUILDRIGHTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceChangeGuildRightsMessage : public NetworkInterface {
public:
    unsigned int guildId = 0;
    unsigned int rights = 0;
    unsigned int protocolId = 489;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceChangeGuildRightsMessage(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);

    void _rightsFunc(ICustomDataInput &input);
};

#endif