#ifndef OBJECTITEMINFORMATIONWITHQUANTITY
#define OBJECTITEMINFORMATIONWITHQUANTITY

#include "../IO/ICustomDataInput.h"
#include "ObjectItemMinimalInformation.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemInformationWithQuantity : public ObjectItemMinimalInformation {
public:
    unsigned int quantity = 0;
    unsigned int protocolId = 6066;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemInformationWithQuantity(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif