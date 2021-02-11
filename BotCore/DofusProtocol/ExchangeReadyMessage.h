#ifndef EXCHANGEREADYMESSAGE
#define EXCHANGEREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeReadyMessage : public NetworkInterface {
public:
    bool ready = false;
    unsigned int step = 0;
    unsigned int protocolId = 6945;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeReadyMessage(ICustomDataInput &input);

    void _readyFunc(ICustomDataInput &input);

    void _stepFunc(ICustomDataInput &input);
};

#endif