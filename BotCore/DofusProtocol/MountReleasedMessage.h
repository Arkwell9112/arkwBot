#ifndef MOUNTRELEASEDMESSAGE
#define MOUNTRELEASEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountReleasedMessage : public NetworkInterface {
public:
    int mountId = 0;
    unsigned int protocolId = 8302;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountReleasedMessage(ICustomDataInput &input);

    void _mountIdFunc(ICustomDataInput &input);
};

#endif