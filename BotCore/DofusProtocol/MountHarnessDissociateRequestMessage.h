#ifndef MOUNTHARNESSDISSOCIATEREQUESTMESSAGE
#define MOUNTHARNESSDISSOCIATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountHarnessDissociateRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3630;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountHarnessDissociateRequestMessage(ICustomDataInput &input);
};

#endif