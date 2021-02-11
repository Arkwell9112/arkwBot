#ifndef EXCHANGEBIDHOUSEITEMADDOKMESSAGE
#define EXCHANGEBIDHOUSEITEMADDOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItemToSellInBid.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeBidHouseItemAddOkMessage : public NetworkInterface {
public:
    ObjectItemToSellInBid itemInfo;
    unsigned int protocolId = 8897;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseItemAddOkMessage(ICustomDataInput &input);
};

#endif