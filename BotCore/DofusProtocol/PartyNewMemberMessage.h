#ifndef PARTYNEWMEMBERMESSAGE
#define PARTYNEWMEMBERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "PartyUpdateMessage.h"

class PartyNewMemberMessage : public PartyUpdateMessage {
public:
    unsigned int protocolId = 9752;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyNewMemberMessage(ICustomDataInput &input);
};

#endif