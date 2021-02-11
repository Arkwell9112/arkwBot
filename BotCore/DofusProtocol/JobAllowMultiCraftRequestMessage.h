#ifndef JOBALLOWMULTICRAFTREQUESTMESSAGE
#define JOBALLOWMULTICRAFTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobAllowMultiCraftRequestMessage : public NetworkInterface {
public:
    bool enabled = false;
    unsigned int protocolId = 3238;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobAllowMultiCraftRequestMessage(ICustomDataInput &input);

    void _enabledFunc(ICustomDataInput &input);
};

#endif