#ifndef HOUSESELLREQUESTMESSAGE
#define HOUSESELLREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseSellRequestMessage : public NetworkInterface {
public:
    unsigned int instanceId = 0;
    double amount = 0;
    bool forSale = false;
    unsigned int protocolId = 1999;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseSellRequestMessage(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);

    void _forSaleFunc(ICustomDataInput &input);
};

#endif