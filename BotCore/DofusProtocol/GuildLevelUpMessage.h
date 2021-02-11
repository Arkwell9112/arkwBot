#ifndef GUILDLEVELUPMESSAGE
#define GUILDLEVELUPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildLevelUpMessage : public NetworkInterface {
public:
    unsigned int newLevel = 0;
    unsigned int protocolId = 590;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildLevelUpMessage(ICustomDataInput &input);

    void _newLevelFunc(ICustomDataInput &input);
};

#endif