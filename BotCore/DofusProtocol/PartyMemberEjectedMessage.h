#ifndef PARTYMEMBEREJECTEDMESSAGE
#define PARTYMEMBEREJECTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyMemberRemoveMessage.h"

class PartyMemberEjectedMessage : public PartyMemberRemoveMessage {
public:
    double kickerId = 0;
    unsigned int protocolId = 1694;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyMemberEjectedMessage(ICustomDataInput &input);

    void _kickerIdFunc(ICustomDataInput &input);
};

#endif