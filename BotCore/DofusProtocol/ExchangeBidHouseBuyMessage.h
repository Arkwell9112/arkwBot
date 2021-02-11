#ifndef EXCHANGEBIDHOUSEBUYMESSAGE
#define EXCHANGEBIDHOUSEBUYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidHouseBuyMessage : public NetworkInterface {
public:
    unsigned int uid = 0;
    unsigned int qty = 0;
    double price = 0;
    unsigned int protocolId = 7017;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseBuyMessage(ICustomDataInput &input);

    void _uidFunc(ICustomDataInput &input);

    void _qtyFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif