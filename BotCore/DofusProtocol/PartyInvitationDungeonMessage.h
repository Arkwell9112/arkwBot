#ifndef PARTYINVITATIONDUNGEONMESSAGE
#define PARTYINVITATIONDUNGEONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyInvitationMessage.h"

class PartyInvitationDungeonMessage : public PartyInvitationMessage {
public:
    unsigned int dungeonId = 0;
    unsigned int protocolId = 6025;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationDungeonMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);
};

#endif