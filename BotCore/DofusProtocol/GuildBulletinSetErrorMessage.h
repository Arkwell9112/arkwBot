#ifndef GUILDBULLETINSETERRORMESSAGE
#define GUILDBULLETINSETERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeSetErrorMessage.h"

class GuildBulletinSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    unsigned int protocolId = 5073;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildBulletinSetErrorMessage(ICustomDataInput &input);
};

#endif