#ifndef PARTYFOLLOWMEMBERREQUESTMESSAGE
#define PARTYFOLLOWMEMBERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyFollowMemberRequestMessage : public AbstractPartyMessage {
public:
    double playerId = 0;
    unsigned int protocolId = 8341;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyFollowMemberRequestMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif