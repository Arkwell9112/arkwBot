#ifndef ACQUAINTANCEADDEDMESSAGE
#define ACQUAINTANCEADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AcquaintanceInformation.h"

class AcquaintanceAddedMessage : public NetworkInterface {
public:
    AcquaintanceInformation acquaintanceAdded;
    unsigned int protocolId = 2430;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintanceAddedMessage(ICustomDataInput &input);
};

#endif