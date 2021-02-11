#ifndef PARTYSTOPFOLLOWREQUESTMESSAGE
#define PARTYSTOPFOLLOWREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyStopFollowRequestMessage : public AbstractPartyMessage {
public:
    double playerId = 0;
    unsigned int protocolId = 1693;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyStopFollowRequestMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif