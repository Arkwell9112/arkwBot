#ifndef OBJECTGROUNDADDEDMESSAGE
#define OBJECTGROUNDADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectGroundAddedMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int objectGID = 0;
    unsigned int protocolId = 3928;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectGroundAddedMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);
};

#endif