#ifndef GUILDFACTSERRORMESSAGE
#define GUILDFACTSERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildFactsErrorMessage : public NetworkInterface {
public:
    unsigned int guildId = 0;
    unsigned int protocolId = 2712;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFactsErrorMessage(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);
};

#endif