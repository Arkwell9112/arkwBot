#ifndef EXCHANGEWEIGHTMESSAGE
#define EXCHANGEWEIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeWeightMessage : public NetworkInterface {
public:
    unsigned int currentWeight = 0;
    unsigned int maxWeight = 0;
    unsigned int protocolId = 3261;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeWeightMessage(ICustomDataInput &input);

    void _currentWeightFunc(ICustomDataInput &input);

    void _maxWeightFunc(ICustomDataInput &input);
};

#endif