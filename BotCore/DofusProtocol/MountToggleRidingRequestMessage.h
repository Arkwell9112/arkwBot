#ifndef MOUNTTOGGLERIDINGREQUESTMESSAGE
#define MOUNTTOGGLERIDINGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountToggleRidingRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7857;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountToggleRidingRequestMessage(ICustomDataInput &input);
};

#endif