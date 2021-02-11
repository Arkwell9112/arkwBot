#ifndef OBJECTDELETEDMESSAGE
#define OBJECTDELETEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectDeletedMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int protocolId = 112;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectDeletedMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif