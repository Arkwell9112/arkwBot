#ifndef WARNONPERMADEATHSTATEMESSAGE
#define WARNONPERMADEATHSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class WarnOnPermaDeathStateMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 170;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_WarnOnPermaDeathStateMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif