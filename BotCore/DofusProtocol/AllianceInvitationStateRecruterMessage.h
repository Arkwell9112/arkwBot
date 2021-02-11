#ifndef ALLIANCEINVITATIONSTATERECRUTERMESSAGE
#define ALLIANCEINVITATIONSTATERECRUTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AllianceInvitationStateRecruterMessage : public NetworkInterface {
public:
    std::string recrutedName;
    unsigned int invitationState = 0;
    unsigned int protocolId = 1920;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInvitationStateRecruterMessage(ICustomDataInput &input);

    void _recrutedNameFunc(ICustomDataInput &input);

    void _invitationStateFunc(ICustomDataInput &input);
};

#endif