#ifndef GUILDGETINFORMATIONSMESSAGE
#define GUILDGETINFORMATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildGetInformationsMessage : public NetworkInterface {
public:
    unsigned int infoType = 0;
    unsigned int protocolId = 1205;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildGetInformationsMessage(ICustomDataInput &input);

    void _infoTypeFunc(ICustomDataInput &input);
};

#endif