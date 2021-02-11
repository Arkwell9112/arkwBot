#ifndef ALLIANCEMOTDMESSAGE
#define ALLIANCEMOTDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "SocialNoticeMessage.h"

class AllianceMotdMessage : public SocialNoticeMessage {
public:
    unsigned int protocolId = 2398;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceMotdMessage(ICustomDataInput &input);
};

#endif