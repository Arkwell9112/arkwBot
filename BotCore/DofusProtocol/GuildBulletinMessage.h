#ifndef GUILDBULLETINMESSAGE
#define GUILDBULLETINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "BulletinMessage.h"

class GuildBulletinMessage : public BulletinMessage {
public:
    unsigned int protocolId = 5886;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildBulletinMessage(ICustomDataInput &input);
};

#endif