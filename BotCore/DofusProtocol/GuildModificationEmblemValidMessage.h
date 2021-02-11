#ifndef GUILDMODIFICATIONEMBLEMVALIDMESSAGE
#define GUILDMODIFICATIONEMBLEMVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildEmblem.h"

class GuildModificationEmblemValidMessage : public NetworkInterface {
public:
    GuildEmblem guildEmblem;
    unsigned int protocolId = 2102;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildModificationEmblemValidMessage(ICustomDataInput &input);
};

#endif