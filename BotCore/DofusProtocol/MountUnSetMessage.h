#ifndef MOUNTUNSETMESSAGE
#define MOUNTUNSETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountUnSetMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4823;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountUnSetMessage(ICustomDataInput &input);
};

#endif