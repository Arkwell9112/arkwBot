#ifndef GUILDCREATIONRESULTMESSAGE
#define GUILDCREATIONRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildCreationResultMessage : public NetworkInterface {
public:
    unsigned int result = 0;
    unsigned int protocolId = 9705;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildCreationResultMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif