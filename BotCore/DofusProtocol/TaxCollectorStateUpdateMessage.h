#ifndef TAXCOLLECTORSTATEUPDATEMESSAGE
#define TAXCOLLECTORSTATEUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TaxCollectorStateUpdateMessage : public NetworkInterface {
public:
    double uniqueId = 0;
    int state = 0;
    unsigned int protocolId = 5127;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorStateUpdateMessage(ICustomDataInput &input);

    void _uniqueIdFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);
};

#endif