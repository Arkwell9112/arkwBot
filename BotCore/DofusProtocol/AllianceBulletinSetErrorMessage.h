#ifndef ALLIANCEBULLETINSETERRORMESSAGE
#define ALLIANCEBULLETINSETERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeSetErrorMessage.h"

class AllianceBulletinSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    unsigned int protocolId = 7306;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceBulletinSetErrorMessage(ICustomDataInput &input);
};

#endif