#ifndef OBJECTITEM
#define OBJECTITEM

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectEffect.h"
#include "Item.h"

class ObjectItem : public Item {
public:
    unsigned int position = 63;
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 1604;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItem(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif