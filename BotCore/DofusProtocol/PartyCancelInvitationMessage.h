#ifndef PARTYCANCELINVITATIONMESSAGE
#define PARTYCANCELINVITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyCancelInvitationMessage : public AbstractPartyMessage {
public:
    double guestId = 0;
    unsigned int protocolId = 7168;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyCancelInvitationMessage(ICustomDataInput &input);

    void _guestIdFunc(ICustomDataInput &input);
};

#endif