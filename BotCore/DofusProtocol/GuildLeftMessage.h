#ifndef GUILDLEFTMESSAGE
#define GUILDLEFTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildLeftMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9457;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildLeftMessage(ICustomDataInput &input);
};

#endif