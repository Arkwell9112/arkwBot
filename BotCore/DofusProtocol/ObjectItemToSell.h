#ifndef OBJECTITEMTOSELL
#define OBJECTITEMTOSELL

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectEffect.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemToSell : public Item {
public:
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    double objectPrice = 0;
    unsigned int protocolId = 6155;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemToSell(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);

    void _objectPriceFunc(ICustomDataInput &input);
};

#endif