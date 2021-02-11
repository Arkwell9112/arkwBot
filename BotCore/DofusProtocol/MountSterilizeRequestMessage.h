#ifndef MOUNTSTERILIZEREQUESTMESSAGE
#define MOUNTSTERILIZEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountSterilizeRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3166;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountSterilizeRequestMessage(ICustomDataInput &input);
};

#endif