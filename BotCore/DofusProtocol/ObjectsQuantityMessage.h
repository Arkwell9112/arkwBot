#ifndef OBJECTSQUANTITYMESSAGE
#define OBJECTSQUANTITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemQuantity.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectsQuantityMessage : public NetworkInterface {
public:
    std::vector<ObjectItemQuantity> objectsUIDAndQty;
    unsigned int protocolId = 739;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectsQuantityMessage(ICustomDataInput &input);

    void _objectsUIDAndQtyFunc(ICustomDataInput &input);
};

#endif