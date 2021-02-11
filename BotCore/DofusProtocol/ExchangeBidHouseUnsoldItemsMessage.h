#ifndef EXCHANGEBIDHOUSEUNSOLDITEMSMESSAGE
#define EXCHANGEBIDHOUSEUNSOLDITEMSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemGenericQuantity.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeBidHouseUnsoldItemsMessage : public NetworkInterface {
public:
    std::vector<ObjectItemGenericQuantity> items;
    unsigned int protocolId = 9680;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseUnsoldItemsMessage(ICustomDataInput &input);

    void _itemsFunc(ICustomDataInput &input);
};

#endif