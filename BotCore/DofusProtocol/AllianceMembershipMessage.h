#ifndef ALLIANCEMEMBERSHIPMESSAGE
#define ALLIANCEMEMBERSHIPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AllianceJoinedMessage.h"

class AllianceMembershipMessage : public AllianceJoinedMessage {
public:
    unsigned int protocolId = 4207;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceMembershipMessage(ICustomDataInput &input);
};

#endif