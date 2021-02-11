#ifndef GUILDCREATIONVALIDMESSAGE
#define GUILDCREATIONVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "GuildEmblem.h"

class GuildCreationValidMessage : public NetworkInterface {
public:
    std::string guildName;
    GuildEmblem guildEmblem;
    unsigned int protocolId = 5729;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildCreationValidMessage(ICustomDataInput &input);

    void _guildNameFunc(ICustomDataInput &input);
};

#endif