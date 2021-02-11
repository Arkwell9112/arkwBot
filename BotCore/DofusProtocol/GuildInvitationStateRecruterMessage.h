#ifndef GUILDINVITATIONSTATERECRUTERMESSAGE
#define GUILDINVITATIONSTATERECRUTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class GuildInvitationStateRecruterMessage : public NetworkInterface {
public:
    std::string recrutedName;
    unsigned int invitationState = 0;
    unsigned int protocolId = 6491;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInvitationStateRecruterMessage(ICustomDataInput &input);

    void _recrutedNameFunc(ICustomDataInput &input);

    void _invitationStateFunc(ICustomDataInput &input);
};

#endif