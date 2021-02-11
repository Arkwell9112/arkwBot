#ifndef MOUNTSETXPRATIOREQUESTMESSAGE
#define MOUNTSETXPRATIOREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountSetXpRatioRequestMessage : public NetworkInterface {
public:
    unsigned int xpRatio = 0;
    unsigned int protocolId = 9078;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountSetXpRatioRequestMessage(ICustomDataInput &input);

    void _xpRatioFunc(ICustomDataInput &input);
};

#endif