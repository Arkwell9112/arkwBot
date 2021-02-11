#ifndef GUILDINVITATIONANSWERMESSAGE
#define GUILDINVITATIONANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildInvitationAnswerMessage : public NetworkInterface {
public:
    bool accept = false;
    unsigned int protocolId = 795;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInvitationAnswerMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif