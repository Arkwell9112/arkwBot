#ifndef PADDOCKSELLREQUESTMESSAGE
#define PADDOCKSELLREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockSellRequestMessage : public NetworkInterface {
public:
    double price = 0;
    bool forSale = false;
    unsigned int protocolId = 6482;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockSellRequestMessage(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);

    void _forSaleFunc(ICustomDataInput &input);
};

#endif