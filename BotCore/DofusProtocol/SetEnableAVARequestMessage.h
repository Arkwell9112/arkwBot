#ifndef SETENABLEAVAREQUESTMESSAGE
#define SETENABLEAVAREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SetEnableAVARequestMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 7227;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SetEnableAVARequestMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif