#ifndef BULLETINMESSAGE
#define BULLETINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeMessage.h"

class BulletinMessage : public SocialNoticeMessage {
public:
    unsigned int lastNotifiedTimestamp = 0;
    unsigned int protocolId = 6576;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BulletinMessage(ICustomDataInput &input);

    void _lastNotifiedTimestampFunc(ICustomDataInput &input);
};

#endif