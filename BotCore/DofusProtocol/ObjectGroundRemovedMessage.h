#ifndef OBJECTGROUNDREMOVEDMESSAGE
#define OBJECTGROUNDREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectGroundRemovedMessage : public NetworkInterface {
public:
    unsigned int cell = 0;
    unsigned int protocolId = 1298;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectGroundRemovedMessage(ICustomDataInput &input);

    void _cellFunc(ICustomDataInput &input);
};

#endif