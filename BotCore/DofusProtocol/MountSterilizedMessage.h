#ifndef MOUNTSTERILIZEDMESSAGE
#define MOUNTSTERILIZEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountSterilizedMessage : public NetworkInterface {
public:
    int mountId = 0;
    unsigned int protocolId = 2550;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountSterilizedMessage(ICustomDataInput &input);

    void _mountIdFunc(ICustomDataInput &input);
};

#endif