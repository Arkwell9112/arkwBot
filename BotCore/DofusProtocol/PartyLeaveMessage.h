#ifndef PARTYLEAVEMESSAGE
#define PARTYLEAVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyLeaveMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 3736;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyLeaveMessage(ICustomDataInput &input);
};

#endif