#ifndef TELEPORTREQUESTMESSAGE
#define TELEPORTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportRequestMessage : public NetworkInterface {
public:
    unsigned int sourceType = 0;
    unsigned int destinationType = 0;
    double mapId = 0;
    unsigned int protocolId = 8875;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportRequestMessage(ICustomDataInput &input);

    void _sourceTypeFunc(ICustomDataInput &input);

    void _destinationTypeFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif