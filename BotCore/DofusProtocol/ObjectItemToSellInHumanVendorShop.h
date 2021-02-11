#ifndef OBJECTITEMTOSELLINHUMANVENDORSHOP
#define OBJECTITEMTOSELLINHUMANVENDORSHOP

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectEffect.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemToSellInHumanVendorShop : public Item {
public:
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    double objectPrice = 0;
    double publicPrice = 0;
    unsigned int protocolId = 7188;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemToSellInHumanVendorShop(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);

    void _objectPriceFunc(ICustomDataInput &input);

    void _publicPriceFunc(ICustomDataInput &input);
};

#endif