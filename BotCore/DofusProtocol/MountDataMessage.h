#ifndef MOUNTDATAMESSAGE
#define MOUNTDATAMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "MountClientData.h"

class MountDataMessage : public NetworkInterface {
public:
    MountClientData mountData;
    unsigned int protocolId = 4177;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountDataMessage(ICustomDataInput &input);
};

#endif