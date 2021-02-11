#ifndef OBJECTITEMTOSELLINNPCSHOP
#define OBJECTITEMTOSELLINNPCSHOP

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ObjectItemToSell.h"
#include "ObjectItemMinimalInformation.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemToSellInNpcShop : public ObjectItemMinimalInformation {
public:
    double objectPrice = 0;
    std::string buyCriterion;
    unsigned int protocolId = 4751;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemToSellInNpcShop(ICustomDataInput &input);

    void _objectPriceFunc(ICustomDataInput &input);

    void _buyCriterionFunc(ICustomDataInput &input);
};

#endif