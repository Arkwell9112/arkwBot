#ifndef PARTYDELETEDMESSAGE
#define PARTYDELETEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyDeletedMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 3583;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyDeletedMessage(ICustomDataInput &input);
};

#endif