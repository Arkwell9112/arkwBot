#ifndef GUILDFACTSREQUESTMESSAGE
#define GUILDFACTSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildFactsRequestMessage : public NetworkInterface {
public:
    unsigned int guildId = 0;
    unsigned int protocolId = 2702;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFactsRequestMessage(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);
};

#endif