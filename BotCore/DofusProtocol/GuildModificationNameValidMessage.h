#ifndef GUILDMODIFICATIONNAMEVALIDMESSAGE
#define GUILDMODIFICATIONNAMEVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class GuildModificationNameValidMessage : public NetworkInterface {
public:
    std::string guildName;
    unsigned int protocolId = 1584;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildModificationNameValidMessage(ICustomDataInput &input);

    void _guildNameFunc(ICustomDataInput &input);
};

#endif