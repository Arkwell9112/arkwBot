#ifndef PARTYMODIFIABLESTATUSMESSAGE
#define PARTYMODIFIABLESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyModifiableStatusMessage : public AbstractPartyMessage {
public:
    bool enabled = false;
    unsigned int protocolId = 3726;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyModifiableStatusMessage(ICustomDataInput &input);

    void _enabledFunc(ICustomDataInput &input);
};

#endif