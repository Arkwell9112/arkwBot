#ifndef EXCHANGEOFFLINESOLDITEMSMESSAGE
#define EXCHANGEOFFLINESOLDITEMSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemQuantityPriceDateEffects.h"
#include "ObjectItemQuantity.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeOfflineSoldItemsMessage : public NetworkInterface {
public:
    std::vector<ObjectItemQuantityPriceDateEffects> bidHouseItems;
    std::vector<ObjectItemQuantityPriceDateEffects> merchantItems;
    unsigned int protocolId = 8850;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeOfflineSoldItemsMessage(ICustomDataInput &input);

    void _bidHouseItemsFunc(ICustomDataInput &input);

    void _merchantItemsFunc(ICustomDataInput &input);
};

#endif