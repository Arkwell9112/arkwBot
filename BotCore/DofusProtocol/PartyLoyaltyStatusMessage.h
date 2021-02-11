#ifndef PARTYLOYALTYSTATUSMESSAGE
#define PARTYLOYALTYSTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyLoyaltyStatusMessage : public AbstractPartyMessage {
public:
    bool loyal = false;
    unsigned int protocolId = 8011;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyLoyaltyStatusMessage(ICustomDataInput &input);

    void _loyalFunc(ICustomDataInput &input);
};

#endif