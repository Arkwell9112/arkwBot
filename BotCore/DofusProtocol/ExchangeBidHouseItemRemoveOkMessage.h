#ifndef EXCHANGEBIDHOUSEITEMREMOVEOKMESSAGE
#define EXCHANGEBIDHOUSEITEMREMOVEOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ExchangeBidHouseItemRemoveOkMessage : public NetworkInterface {
public:
    int sellerId = 0;
    unsigned int protocolId = 3599;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseItemRemoveOkMessage(ICustomDataInput &input);

    void _sellerIdFunc(ICustomDataInput &input);
};

#endif