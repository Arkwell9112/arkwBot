#ifndef PARTYINVITATIONDUNGEONREQUESTMESSAGE
#define PARTYINVITATIONDUNGEONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyInvitationRequestMessage.h"

class PartyInvitationDungeonRequestMessage : public PartyInvitationRequestMessage {
public:
    unsigned int dungeonId = 0;
    unsigned int protocolId = 6000;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationDungeonRequestMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);
};

#endif