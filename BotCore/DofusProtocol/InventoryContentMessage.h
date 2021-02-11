#ifndef INVENTORYCONTENTMESSAGE
#define INVENTORYCONTENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"

class InventoryContentMessage : public NetworkInterface {
public:
    std::vector<ObjectItem> objects;
    double kamas = 0;
    unsigned int protocolId = 4045;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InventoryContentMessage(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);
};

#endif