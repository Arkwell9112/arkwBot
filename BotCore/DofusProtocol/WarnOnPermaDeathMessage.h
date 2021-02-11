#ifndef WARNONPERMADEATHMESSAGE
#define WARNONPERMADEATHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class WarnOnPermaDeathMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 6626;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_WarnOnPermaDeathMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif