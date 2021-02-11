#ifndef GUILDPADDOCKBOUGHTMESSAGE
#define GUILDPADDOCKBOUGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PaddockContentInformations.h"

class GuildPaddockBoughtMessage : public NetworkInterface {
public:
    PaddockContentInformations paddockInfo;
    unsigned int protocolId = 1362;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildPaddockBoughtMessage(ICustomDataInput &input);
};

#endif