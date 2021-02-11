#ifndef GUILDCHARACSUPGRADEREQUESTMESSAGE
#define GUILDCHARACSUPGRADEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildCharacsUpgradeRequestMessage : public NetworkInterface {
public:
    unsigned int charaTypeTarget = 0;
    unsigned int protocolId = 6711;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildCharacsUpgradeRequestMessage(ICustomDataInput &input);

    void _charaTypeTargetFunc(ICustomDataInput &input);
};

#endif