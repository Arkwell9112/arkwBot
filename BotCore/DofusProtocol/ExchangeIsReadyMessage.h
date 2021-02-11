#ifndef EXCHANGEISREADYMESSAGE
#define EXCHANGEISREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeIsReadyMessage : public NetworkInterface {
public:
    double id = 0;
    bool ready = false;
    unsigned int protocolId = 2338;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeIsReadyMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _readyFunc(ICustomDataInput &input);
};

#endif