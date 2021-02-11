#ifndef MOUNTXPRATIOMESSAGE
#define MOUNTXPRATIOMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountXpRatioMessage : public NetworkInterface {
public:
    unsigned int ratio = 0;
    unsigned int protocolId = 8967;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountXpRatioMessage(ICustomDataInput &input);

    void _ratioFunc(ICustomDataInput &input);
};

#endif