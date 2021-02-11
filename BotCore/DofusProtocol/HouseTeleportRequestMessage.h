#ifndef HOUSETELEPORTREQUESTMESSAGE
#define HOUSETELEPORTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TeleportRequestMessage.h"

class HouseTeleportRequestMessage : public NetworkInterface {
public:
    unsigned int houseId = 0;
    unsigned int houseInstanceId = 0;
    unsigned int protocolId = 8828;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseTeleportRequestMessage(ICustomDataInput &input);

    void _houseIdFunc(ICustomDataInput &input);

    void _houseInstanceIdFunc(ICustomDataInput &input);
};

#endif