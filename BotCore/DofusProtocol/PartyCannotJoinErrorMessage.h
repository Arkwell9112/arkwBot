#ifndef PARTYCANNOTJOINERRORMESSAGE
#define PARTYCANNOTJOINERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyCannotJoinErrorMessage : public AbstractPartyMessage {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 232;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyCannotJoinErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif