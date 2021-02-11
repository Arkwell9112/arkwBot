#ifndef PARTYINVITATIONCANCELLEDFORGUESTMESSAGE
#define PARTYINVITATIONCANCELLEDFORGUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyInvitationCancelledForGuestMessage : public AbstractPartyMessage {
public:
    double cancelerId = 0;
    unsigned int protocolId = 2069;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationCancelledForGuestMessage(ICustomDataInput &input);

    void _cancelerIdFunc(ICustomDataInput &input);
};

#endif