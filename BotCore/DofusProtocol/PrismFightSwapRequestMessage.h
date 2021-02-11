#ifndef PRISMFIGHTSWAPREQUESTMESSAGE
#define PRISMFIGHTSWAPREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismFightSwapRequestMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    double targetId = 0;
    unsigned int protocolId = 4362;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightSwapRequestMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif