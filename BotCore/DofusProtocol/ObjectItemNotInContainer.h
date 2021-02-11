#ifndef OBJECTITEMNOTINCONTAINER
#define OBJECTITEMNOTINCONTAINER

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectEffect.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemNotInContainer : public Item {
public:
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 4161;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemNotInContainer(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif