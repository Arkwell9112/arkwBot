#ifndef OBJECTITEMQUANTITYPRICEDATEEFFECTS
#define OBJECTITEMQUANTITYPRICEDATEEFFECTS

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"
#include "ObjectItemQuantity.h"
#include "ObjectItemGenericQuantity.h"
#include "ObjectItem.h"
#include "ObjectEffects.h"
#include "Item.h"

class ObjectItemQuantityPriceDateEffects : public ObjectItemGenericQuantity {
public:
    double price = 0;
    ObjectEffects effects;
    unsigned int date = 0;
    unsigned int protocolId = 6993;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemQuantityPriceDateEffects(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);

    void _dateFunc(ICustomDataInput &input);
};

#endif