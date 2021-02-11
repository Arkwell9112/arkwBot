#ifndef GUILDPADDOCKREMOVEDMESSAGE
#define GUILDPADDOCKREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildPaddockRemovedMessage : public NetworkInterface {
public:
    double paddockId = 0;
    unsigned int protocolId = 579;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildPaddockRemovedMessage(ICustomDataInput &input);

    void _paddockIdFunc(ICustomDataInput &input);
};

#endif