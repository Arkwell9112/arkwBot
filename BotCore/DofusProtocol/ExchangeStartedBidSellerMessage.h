#ifndef EXCHANGESTARTEDBIDSELLERMESSAGE
#define EXCHANGESTARTEDBIDSELLERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "SellerBuyerDescriptor.h"
#include "ObjectItemToSellInBid.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeStartedBidSellerMessage : public NetworkInterface {
public:
    SellerBuyerDescriptor sellerDescriptor;
    std::vector<ObjectItemToSellInBid> objectsInfos;
    unsigned int protocolId = 3101;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedBidSellerMessage(ICustomDataInput &input);

    void _objectsInfosFunc(ICustomDataInput &input);
};

#endif