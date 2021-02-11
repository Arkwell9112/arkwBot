#ifndef PARTYNEWGUESTMESSAGE
#define PARTYNEWGUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyGuestInformations.h"
#include "AbstractPartyEventMessage.h"

class PartyNewGuestMessage : public AbstractPartyEventMessage {
public:
    PartyGuestInformations guest;
    unsigned int protocolId = 3026;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyNewGuestMessage(ICustomDataInput &input);
};

#endif