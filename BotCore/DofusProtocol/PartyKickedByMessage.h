#ifndef PARTYKICKEDBYMESSAGE
#define PARTYKICKEDBYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyKickedByMessage : public AbstractPartyMessage {
public:
    double kickerId = 0;
    unsigned int protocolId = 7043;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyKickedByMessage(ICustomDataInput &input);

    void _kickerIdFunc(ICustomDataInput &input);
};

#endif