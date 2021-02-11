#ifndef PARTYENTITYUPDATELIGHTMESSAGE
#define PARTYENTITYUPDATELIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyUpdateLightMessage.h"

class PartyEntityUpdateLightMessage : public PartyUpdateLightMessage {
public:
    unsigned int indexId = 0;
    unsigned int protocolId = 5106;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyEntityUpdateLightMessage(ICustomDataInput &input);

    void _indexIdFunc(ICustomDataInput &input);
};

#endif