#ifndef GUILDCREATIONSTARTEDMESSAGE
#define GUILDCREATIONSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildCreationStartedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4750;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildCreationStartedMessage(ICustomDataInput &input);
};

#endif