#ifndef PARTYRESTRICTEDMESSAGE
#define PARTYRESTRICTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyRestrictedMessage : public AbstractPartyMessage {
public:
    bool restricted = false;
    unsigned int protocolId = 4765;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyRestrictedMessage(ICustomDataInput &input);

    void _restrictedFunc(ICustomDataInput &input);
};

#endif