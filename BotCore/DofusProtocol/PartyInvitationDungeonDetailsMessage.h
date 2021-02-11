#ifndef PARTYINVITATIONDUNGEONDETAILSMESSAGE
#define PARTYINVITATIONDUNGEONDETAILSMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "PartyInvitationDetailsMessage.h"

class PartyInvitationDungeonDetailsMessage : public PartyInvitationDetailsMessage {
public:
    unsigned int dungeonId = 0;
    std::vector<bool> playersDungeonReady;
    unsigned int protocolId = 7154;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationDungeonDetailsMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _playersDungeonReadyFunc(ICustomDataInput &input);
};

#endif