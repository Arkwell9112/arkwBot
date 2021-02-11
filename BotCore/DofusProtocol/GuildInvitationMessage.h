#ifndef GUILDINVITATIONMESSAGE
#define GUILDINVITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildInvitationMessage : public NetworkInterface {
public:
    double targetId = 0;
    unsigned int protocolId = 8355;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInvitationMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif