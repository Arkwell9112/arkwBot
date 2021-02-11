#ifndef PARTYKICKREQUESTMESSAGE
#define PARTYKICKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyKickRequestMessage : public AbstractPartyMessage {
public:
    double playerId = 0;
    unsigned int protocolId = 142;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyKickRequestMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif