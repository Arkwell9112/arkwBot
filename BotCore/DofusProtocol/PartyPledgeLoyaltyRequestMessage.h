#ifndef PARTYPLEDGELOYALTYREQUESTMESSAGE
#define PARTYPLEDGELOYALTYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyPledgeLoyaltyRequestMessage : public AbstractPartyMessage {
public:
    bool loyal = false;
    unsigned int protocolId = 6794;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyPledgeLoyaltyRequestMessage(ICustomDataInput &input);

    void _loyalFunc(ICustomDataInput &input);
};

#endif