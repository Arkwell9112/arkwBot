#ifndef PARTYCANCELINVITATIONNOTIFICATIONMESSAGE
#define PARTYCANCELINVITATIONNOTIFICATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyEventMessage.h"

class PartyCancelInvitationNotificationMessage : public AbstractPartyEventMessage {
public:
    double cancelerId = 0;
    double guestId = 0;
    unsigned int protocolId = 4583;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyCancelInvitationNotificationMessage(ICustomDataInput &input);

    void _cancelerIdFunc(ICustomDataInput &input);

    void _guestIdFunc(ICustomDataInput &input);
};

#endif