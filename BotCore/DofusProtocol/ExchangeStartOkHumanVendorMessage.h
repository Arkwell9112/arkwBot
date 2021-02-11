#ifndef EXCHANGESTARTOKHUMANVENDORMESSAGE
#define EXCHANGESTARTOKHUMANVENDORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemToSellInHumanVendorShop.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeStartOkHumanVendorMessage : public NetworkInterface {
public:
    double sellerId = 0;
    std::vector<ObjectItemToSellInHumanVendorShop> objectsInfos;
    unsigned int protocolId = 9026;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkHumanVendorMessage(ICustomDataInput &input);

    void _sellerIdFunc(ICustomDataInput &input);

    void _objectsInfosFunc(ICustomDataInput &input);
};

#endif