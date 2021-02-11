#ifndef PARTYNAMESETREQUESTMESSAGE
#define PARTYNAMESETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractPartyMessage.h"

class PartyNameSetRequestMessage : public AbstractPartyMessage {
public:
    std::string partyName;
    unsigned int protocolId = 5846;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyNameSetRequestMessage(ICustomDataInput &input);

    void _partyNameFunc(ICustomDataInput &input);
};

#endif