#ifndef EXCHANGEMONEYMOVEMENTINFORMATIONMESSAGE
#define EXCHANGEMONEYMOVEMENTINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeMoneyMovementInformationMessage : public NetworkInterface {
public:
    double limit = 0;
    unsigned int protocolId = 8470;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMoneyMovementInformationMessage(ICustomDataInput &input);

    void _limitFunc(ICustomDataInput &input);
};

#endif