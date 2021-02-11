#ifndef PARTYFOLLOWTHISMEMBERREQUESTMESSAGE
#define PARTYFOLLOWTHISMEMBERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyFollowMemberRequestMessage.h"

class PartyFollowThisMemberRequestMessage : public PartyFollowMemberRequestMessage {
public:
    bool enabled = false;
    unsigned int protocolId = 4725;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyFollowThisMemberRequestMessage(ICustomDataInput &input);

    void _enabledFunc(ICustomDataInput &input);
};

#endif