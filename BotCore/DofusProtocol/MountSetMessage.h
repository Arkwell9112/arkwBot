#ifndef MOUNTSETMESSAGE
#define MOUNTSETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "MountClientData.h"

class MountSetMessage : public NetworkInterface {
public:
    MountClientData mountData;
    unsigned int protocolId = 8585;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountSetMessage(ICustomDataInput &input);
};

#endif