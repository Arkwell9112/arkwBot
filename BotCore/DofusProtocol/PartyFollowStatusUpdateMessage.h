#ifndef PARTYFOLLOWSTATUSUPDATEMESSAGE
#define PARTYFOLLOWSTATUSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyFollowStatusUpdateMessage : public AbstractPartyMessage {
public:
    bool success = false;
    bool isFollowed = false;
    double followedId = 0;
    unsigned int protocolId = 3500;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyFollowStatusUpdateMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _followedIdFunc(ICustomDataInput &input);
};

#endif