#ifndef OBJECTITEMGENERICQUANTITY
#define OBJECTITEMGENERICQUANTITY

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemGenericQuantity : public Item {
public:
    unsigned int objectGID = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 6549;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemGenericQuantity(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif