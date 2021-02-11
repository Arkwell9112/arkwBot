#ifndef PARTYREFUSEINVITATIONMESSAGE
#define PARTYREFUSEINVITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyRefuseInvitationMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 1609;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyRefuseInvitationMessage(ICustomDataInput &input);
};

#endif