#ifndef OBJECTITEMINROLEPLAY
#define OBJECTITEMINROLEPLAY

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemInRolePlay : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int objectGID = 0;
    unsigned int protocolId = 8884;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemInRolePlay(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);
};

#endif