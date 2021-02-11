#ifndef SOCIALNOTICESETERRORMESSAGE
#define SOCIALNOTICESETERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SocialNoticeSetErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 4284;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SocialNoticeSetErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif