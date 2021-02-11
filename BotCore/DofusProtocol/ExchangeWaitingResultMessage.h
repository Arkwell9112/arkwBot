#ifndef EXCHANGEWAITINGRESULTMESSAGE
#define EXCHANGEWAITINGRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeWaitingResultMessage : public NetworkInterface {
public:
    bool bwait = false;
    unsigned int protocolId = 2900;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeWaitingResultMessage(ICustomDataInput &input);

    void _bwaitFunc(ICustomDataInput &input);
};

#endif