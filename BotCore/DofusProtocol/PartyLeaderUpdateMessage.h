#ifndef PARTYLEADERUPDATEMESSAGE
#define PARTYLEADERUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyEventMessage.h"

class PartyLeaderUpdateMessage : public AbstractPartyEventMessage {
public:
    double partyLeaderId = 0;
    unsigned int protocolId = 8216;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyLeaderUpdateMessage(ICustomDataInput &input);

    void _partyLeaderIdFunc(ICustomDataInput &input);
};

#endif