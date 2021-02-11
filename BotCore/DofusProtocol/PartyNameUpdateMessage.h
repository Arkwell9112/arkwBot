#ifndef PARTYNAMEUPDATEMESSAGE
#define PARTYNAMEUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractPartyMessage.h"

class PartyNameUpdateMessage : public AbstractPartyMessage {
public:
    std::string partyName;
    unsigned int protocolId = 1249;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyNameUpdateMessage(ICustomDataInput &input);

    void _partyNameFunc(ICustomDataInput &input);
};

#endif