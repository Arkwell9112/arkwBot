#ifndef PARTYLEAVEREQUESTMESSAGE
#define PARTYLEAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyLeaveRequestMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 5219;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyLeaveRequestMessage(ICustomDataInput &input);
};

#endif