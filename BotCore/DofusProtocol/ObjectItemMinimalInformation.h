#ifndef OBJECTITEMMINIMALINFORMATION
#define OBJECTITEMMINIMALINFORMATION

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ObjectEffect.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemMinimalInformation : public Item {
public:
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int protocolId = 3460;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemMinimalInformation(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);
};

#endif