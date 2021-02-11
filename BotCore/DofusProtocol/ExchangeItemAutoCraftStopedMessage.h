#ifndef EXCHANGEITEMAUTOCRAFTSTOPEDMESSAGE
#define EXCHANGEITEMAUTOCRAFTSTOPEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ExchangeItemAutoCraftStopedMessage : public NetworkInterface {
public:
    int reason = 0;
    unsigned int protocolId = 1107;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeItemAutoCraftStopedMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif