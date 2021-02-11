#ifndef CHANNELENABLINGCHANGEMESSAGE
#define CHANNELENABLINGCHANGEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChannelEnablingChangeMessage : public NetworkInterface {
public:
    unsigned int channel = 0;
    bool enable = false;
    unsigned int protocolId = 5328;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChannelEnablingChangeMessage(ICustomDataInput &input);

    void _channelFunc(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif