#ifndef GUILDMOTDMESSAGE
#define GUILDMOTDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeMessage.h"

class GuildMotdMessage : public SocialNoticeMessage {
public:
    unsigned int protocolId = 7610;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMotdMessage(ICustomDataInput &input);
};

#endif