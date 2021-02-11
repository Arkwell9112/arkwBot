#ifndef GUILDMODIFICATIONVALIDMESSAGE
#define GUILDMODIFICATIONVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "GuildEmblem.h"

class GuildModificationValidMessage : public NetworkInterface {
public:
    std::string guildName;
    GuildEmblem guildEmblem;
    unsigned int protocolId = 3317;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildModificationValidMessage(ICustomDataInput &input);

    void _guildNameFunc(ICustomDataInput &input);
};

#endif