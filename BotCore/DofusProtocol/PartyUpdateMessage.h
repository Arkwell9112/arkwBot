#ifndef PARTYUPDATEMESSAGE
#define PARTYUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyMemberInformations.h"
#include "AbstractPartyEventMessage.h"

class PartyUpdateMessage : public AbstractPartyEventMessage {
public:
    PartyMemberInformations memberInformations;
    unsigned int protocolId = 6126;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyUpdateMessage(ICustomDataInput &input);
};

#endif