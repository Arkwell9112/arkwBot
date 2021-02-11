#ifndef OBJECTFEEDMESSAGE
#define OBJECTFEEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemQuantity.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectFeedMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    std::vector<ObjectItemQuantity> meal;
    unsigned int protocolId = 7222;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectFeedMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _mealFunc(ICustomDataInput &input);
};

#endif