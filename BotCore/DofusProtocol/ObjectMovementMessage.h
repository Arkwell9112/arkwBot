#ifndef OBJECTMOVEMENTMESSAGE
#define OBJECTMOVEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectMovementMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int position = 63;
    unsigned int protocolId = 7458;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectMovementMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);
};

#endif