#ifndef SOCIALNOTICESETREQUESTMESSAGE
#define SOCIALNOTICESETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SocialNoticeSetRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 723;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SocialNoticeSetRequestMessage(ICustomDataInput &input);
};

#endif