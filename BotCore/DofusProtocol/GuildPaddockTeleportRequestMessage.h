#ifndef GUILDPADDOCKTELEPORTREQUESTMESSAGE
#define GUILDPADDOCKTELEPORTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TeleportRequestMessage.h"

class GuildPaddockTeleportRequestMessage : public NetworkInterface {
public:
    double paddockId = 0;
    unsigned int protocolId = 3362;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildPaddockTeleportRequestMessage(ICustomDataInput &input);

    void _paddockIdFunc(ICustomDataInput &input);
};

#endif