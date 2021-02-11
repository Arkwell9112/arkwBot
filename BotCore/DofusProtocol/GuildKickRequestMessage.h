#ifndef GUILDKICKREQUESTMESSAGE
#define GUILDKICKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildKickRequestMessage : public NetworkInterface {
public:
    double kickedId = 0;
    unsigned int protocolId = 6424;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildKickRequestMessage(ICustomDataInput &input);

    void _kickedIdFunc(ICustomDataInput &input);
};

#endif