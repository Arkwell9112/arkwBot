#ifndef EXCHANGEHANDLEMOUNTSMESSAGE
#define EXCHANGEHANDLEMOUNTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeHandleMountsMessage : public NetworkInterface {
public:
    int actionType = 0;
    std::vector<unsigned int> ridesId;
    unsigned int protocolId = 1842;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeHandleMountsMessage(ICustomDataInput &input);

    void _actionTypeFunc(ICustomDataInput &input);

    void _ridesIdFunc(ICustomDataInput &input);
};

#endif