#ifndef EXCHANGEPODSMODIFIEDMESSAGE
#define EXCHANGEPODSMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeObjectMessage.h"

class ExchangePodsModifiedMessage : public ExchangeObjectMessage {
public:
    unsigned int currentWeight = 0;
    unsigned int maxWeight = 0;
    unsigned int protocolId = 3680;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangePodsModifiedMessage(ICustomDataInput &input);

    void _currentWeightFunc(ICustomDataInput &input);

    void _maxWeightFunc(ICustomDataInput &input);
};

#endif