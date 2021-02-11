#ifndef STORAGEOBJECTUPDATEMESSAGE
#define STORAGEOBJECTUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItem.h"
#include "Item.h"

class StorageObjectUpdateMessage : public NetworkInterface {
public:
    ObjectItem object;
    unsigned int protocolId = 4094;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StorageObjectUpdateMessage(ICustomDataInput &input);
};

#endif