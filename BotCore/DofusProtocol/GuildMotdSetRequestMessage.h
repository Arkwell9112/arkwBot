#ifndef GUILDMOTDSETREQUESTMESSAGE
#define GUILDMOTDSETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "SocialNoticeSetRequestMessage.h"

class GuildMotdSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;
    unsigned int protocolId = 8648;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMotdSetRequestMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);
};

#endif