#ifndef GUILDMODIFICATIONSTARTEDMESSAGE
#define GUILDMODIFICATIONSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildModificationStartedMessage : public NetworkInterface {
public:
    bool canChangeName = false;
    bool canChangeEmblem = false;
    unsigned int protocolId = 4452;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildModificationStartedMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);
};

#endif