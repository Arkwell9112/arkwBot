#ifndef OBJECTDROPMESSAGE
#define OBJECTDROPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectDropMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 4500;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectDropMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif