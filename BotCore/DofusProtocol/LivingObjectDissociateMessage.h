#ifndef LIVINGOBJECTDISSOCIATEMESSAGE
#define LIVINGOBJECTDISSOCIATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LivingObjectDissociateMessage : public NetworkInterface {
public:
    unsigned int livingUID = 0;
    unsigned int livingPosition = 0;
    unsigned int protocolId = 5304;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LivingObjectDissociateMessage(ICustomDataInput &input);

    void _livingUIDFunc(ICustomDataInput &input);

    void _livingPositionFunc(ICustomDataInput &input);
};

#endif