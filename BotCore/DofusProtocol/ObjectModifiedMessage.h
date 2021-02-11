#ifndef OBJECTMODIFIEDMESSAGE
#define OBJECTMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectModifiedMessage : public NetworkInterface {
public:
    ObjectItem object;
    unsigned int protocolId = 367;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectModifiedMessage(ICustomDataInput &input);
};

#endif