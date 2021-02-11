#ifndef EXCHANGEPLAYERMULTICRAFTREQUESTMESSAGE
#define EXCHANGEPLAYERMULTICRAFTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeRequestMessage.h"

class ExchangePlayerMultiCraftRequestMessage : public ExchangeRequestMessage {
public:
    double target = 0;
    unsigned int skillId = 0;
    unsigned int protocolId = 1545;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangePlayerMultiCraftRequestMessage(ICustomDataInput &input);

    void _targetFunc(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);
};

#endif