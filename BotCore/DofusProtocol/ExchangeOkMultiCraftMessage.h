#ifndef EXCHANGEOKMULTICRAFTMESSAGE
#define EXCHANGEOKMULTICRAFTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeOkMultiCraftMessage : public NetworkInterface {
public:
    double initiatorId = 0;
    double otherId = 0;
    int role = 0;
    unsigned int protocolId = 2113;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeOkMultiCraftMessage(ICustomDataInput &input);

    void _initiatorIdFunc(ICustomDataInput &input);

    void _otherIdFunc(ICustomDataInput &input);

    void _roleFunc(ICustomDataInput &input);
};

#endif