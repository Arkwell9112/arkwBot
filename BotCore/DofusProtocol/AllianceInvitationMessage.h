#ifndef ALLIANCEINVITATIONMESSAGE
#define ALLIANCEINVITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceInvitationMessage : public NetworkInterface {
public:
    double targetId = 0;
    unsigned int protocolId = 5576;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInvitationMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif