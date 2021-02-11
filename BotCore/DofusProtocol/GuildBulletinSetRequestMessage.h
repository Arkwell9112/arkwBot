#ifndef GUILDBULLETINSETREQUESTMESSAGE
#define GUILDBULLETINSETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "SocialNoticeSetRequestMessage.h"

class GuildBulletinSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;
    bool notifyMembers = false;
    unsigned int protocolId = 9047;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildBulletinSetRequestMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);

    void _notifyMembersFunc(ICustomDataInput &input);
};

#endif