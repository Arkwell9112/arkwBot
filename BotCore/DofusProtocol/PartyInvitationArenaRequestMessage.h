#ifndef PARTYINVITATIONARENAREQUESTMESSAGE
#define PARTYINVITATIONARENAREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyInvitationRequestMessage.h"

class PartyInvitationArenaRequestMessage : public PartyInvitationRequestMessage {
public:
    unsigned int protocolId = 2163;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationArenaRequestMessage(ICustomDataInput &input);
};

#endif