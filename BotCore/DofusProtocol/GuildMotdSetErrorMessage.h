#ifndef GUILDMOTDSETERRORMESSAGE
#define GUILDMOTDSETERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeSetErrorMessage.h"

class GuildMotdSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    unsigned int protocolId = 4422;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMotdSetErrorMessage(ICustomDataInput &input);
};

#endif