#ifndef MOUNTRELEASEREQUESTMESSAGE
#define MOUNTRELEASEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountReleaseRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 618;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountReleaseRequestMessage(ICustomDataInput &input);
};

#endif