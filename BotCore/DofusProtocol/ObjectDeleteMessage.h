#ifndef OBJECTDELETEMESSAGE
#define OBJECTDELETEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectDeleteMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 7855;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectDeleteMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif