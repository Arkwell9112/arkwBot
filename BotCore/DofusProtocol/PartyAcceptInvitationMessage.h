#ifndef PARTYACCEPTINVITATIONMESSAGE
#define PARTYACCEPTINVITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyAcceptInvitationMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 3497;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyAcceptInvitationMessage(ICustomDataInput &input);
};

#endif