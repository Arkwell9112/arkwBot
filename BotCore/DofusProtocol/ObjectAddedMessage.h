#ifndef OBJECTADDEDMESSAGE
#define OBJECTADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectAddedMessage : public NetworkInterface {
public:
    ObjectItem object;
    unsigned int origin = 0;
    unsigned int protocolId = 9393;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectAddedMessage(ICustomDataInput &input);

    void _originFunc(ICustomDataInput &input);
};

#endif