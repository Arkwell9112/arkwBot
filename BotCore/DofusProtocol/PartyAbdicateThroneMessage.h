#ifndef PARTYABDICATETHRONEMESSAGE
#define PARTYABDICATETHRONEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyAbdicateThroneMessage : public AbstractPartyMessage {
public:
    double playerId = 0;
    unsigned int protocolId = 462;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyAbdicateThroneMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif