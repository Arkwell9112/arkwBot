#ifndef OBJECTQUANTITYMESSAGE
#define OBJECTQUANTITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectQuantityMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int origin = 0;
    unsigned int protocolId = 229;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectQuantityMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);

    void _originFunc(ICustomDataInput &input);
};

#endif