#ifndef LIVINGOBJECTCHANGESKINREQUESTMESSAGE
#define LIVINGOBJECTCHANGESKINREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LivingObjectChangeSkinRequestMessage : public NetworkInterface {
public:
    unsigned int livingUID = 0;
    unsigned int livingPosition = 0;
    unsigned int skinId = 0;
    unsigned int protocolId = 7728;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LivingObjectChangeSkinRequestMessage(ICustomDataInput &input);

    void _livingUIDFunc(ICustomDataInput &input);

    void _livingPositionFunc(ICustomDataInput &input);

    void _skinIdFunc(ICustomDataInput &input);
};

#endif