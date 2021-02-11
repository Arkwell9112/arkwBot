#ifndef PARTYREFUSEINVITATIONNOTIFICATIONMESSAGE
#define PARTYREFUSEINVITATIONNOTIFICATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyEventMessage.h"

class PartyRefuseInvitationNotificationMessage : public AbstractPartyEventMessage {
public:
    double guestId = 0;
    unsigned int protocolId = 3307;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyRefuseInvitationNotificationMessage(ICustomDataInput &input);

    void _guestIdFunc(ICustomDataInput &input);
};

#endif