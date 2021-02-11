#ifndef PARTYINVITATIONDETAILSREQUESTMESSAGE
#define PARTYINVITATIONDETAILSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyInvitationDetailsRequestMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 4480;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationDetailsRequestMessage(ICustomDataInput &input);
};

#endif