#ifndef OBJECTSETPOSITIONMESSAGE
#define OBJECTSETPOSITIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectSetPositionMessage : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    unsigned int position = 63;
    unsigned int quantity = 0;
    unsigned int protocolId = 5700;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectSetPositionMessage(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif