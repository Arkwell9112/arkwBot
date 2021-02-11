#ifndef STORAGEOBJECTSUPDATEMESSAGE
#define STORAGEOBJECTSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"

class StorageObjectsUpdateMessage : public NetworkInterface {
public:
    std::vector<ObjectItem> objectList;
    unsigned int protocolId = 1789;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StorageObjectsUpdateMessage(ICustomDataInput &input);

    void _objectListFunc(ICustomDataInput &input);
};

#endif