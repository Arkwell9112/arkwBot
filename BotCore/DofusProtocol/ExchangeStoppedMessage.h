#ifndef EXCHANGESTOPPEDMESSAGE
#define EXCHANGESTOPPEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStoppedMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 9798;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStoppedMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif