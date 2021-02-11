#ifndef GUILDINVITATIONSTATERECRUTEDMESSAGE
#define GUILDINVITATIONSTATERECRUTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildInvitationStateRecrutedMessage : public NetworkInterface {
public:
    unsigned int invitationState = 0;
    unsigned int protocolId = 7182;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInvitationStateRecrutedMessage(ICustomDataInput &input);

    void _invitationStateFunc(ICustomDataInput &input);
};

#endif