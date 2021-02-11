#ifndef ALLIANCEMOTDSETREQUESTMESSAGE
#define ALLIANCEMOTDSETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "SocialNoticeSetRequestMessage.h"

class AllianceMotdSetRequestMessage : public SocialNoticeSetRequestMessage {
public:
    std::string content;
    unsigned int protocolId = 1063;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceMotdSetRequestMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);
};

#endif