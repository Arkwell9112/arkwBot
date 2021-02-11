#ifndef EXCHANGESTARTOKNPCSHOPMESSAGE
#define EXCHANGESTARTOKNPCSHOPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemToSellInNpcShop.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeStartOkNpcShopMessage : public NetworkInterface {
public:
    double npcSellerId = 0;
    unsigned int tokenId = 0;
    std::vector<ObjectItemToSellInNpcShop> objectsInfos;
    unsigned int protocolId = 9837;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkNpcShopMessage(ICustomDataInput &input);

    void _npcSellerIdFunc(ICustomDataInput &input);

    void _tokenIdFunc(ICustomDataInput &input);

    void _objectsInfosFunc(ICustomDataInput &input);
};

#endif