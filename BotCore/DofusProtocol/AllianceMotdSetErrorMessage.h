#ifndef ALLIANCEMOTDSETERRORMESSAGE
#define ALLIANCEMOTDSETERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeSetErrorMessage.h"

class AllianceMotdSetErrorMessage : public SocialNoticeSetErrorMessage {
public:
    unsigned int protocolId = 1731;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceMotdSetErrorMessage(ICustomDataInput &input);
};

#endif