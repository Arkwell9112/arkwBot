#ifndef MOUNTRIDINGMESSAGE
#define MOUNTRIDINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountRidingMessage : public NetworkInterface {
public:
    bool isRiding = false;
    bool isAutopilot = false;
    unsigned int protocolId = 3069;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountRidingMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);
};

#endif