#ifndef OBJECTUSEMESSAGE
#define OBJECTUSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectUseMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int protocolId = 8295;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectUseMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);
};

#endif