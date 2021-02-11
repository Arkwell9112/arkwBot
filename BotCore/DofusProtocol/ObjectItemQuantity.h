#ifndef OBJECTITEMQUANTITY
#define OBJECTITEMQUANTITY

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemQuantity : public Item {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 8795;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemQuantity(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif