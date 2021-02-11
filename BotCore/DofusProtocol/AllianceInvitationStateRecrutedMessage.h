#ifndef ALLIANCEINVITATIONSTATERECRUTEDMESSAGE
#define ALLIANCEINVITATIONSTATERECRUTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceInvitationStateRecrutedMessage : public NetworkInterface {
public:
    unsigned int invitationState = 0;
    unsigned int protocolId = 9634;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInvitationStateRecrutedMessage(ICustomDataInput &input);

    void _invitationStateFunc(ICustomDataInput &input);
};

#endif