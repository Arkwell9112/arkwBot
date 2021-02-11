#ifndef GUILDFIGHTJOINREQUESTMESSAGE
#define GUILDFIGHTJOINREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildFightJoinRequestMessage : public NetworkInterface {
public:
    double taxCollectorId = 0;
    unsigned int protocolId = 3100;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightJoinRequestMessage(ICustomDataInput &input);

    void _taxCollectorIdFunc(ICustomDataInput &input);
};

#endif