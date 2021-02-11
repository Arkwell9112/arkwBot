#ifndef OBJECTSADDEDMESSAGE
#define OBJECTSADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"

class ObjectsAddedMessage : public NetworkInterface {
public:
    std::vector<ObjectItem> object;
    unsigned int protocolId = 8179;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectsAddedMessage(ICustomDataInput &input);

    void _objectFunc(ICustomDataInput &input);
};

#endif