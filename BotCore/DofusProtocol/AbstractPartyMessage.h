#ifndef ABSTRACTPARTYMESSAGE
#define ABSTRACTPARTYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AbstractPartyMessage : public NetworkInterface {
public:
    unsigned int partyId = 0;
    unsigned int protocolId = 7157;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractPartyMessage(ICustomDataInput &input);

    void _partyIdFunc(ICustomDataInput &input);
};

#endif