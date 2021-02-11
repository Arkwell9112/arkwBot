#ifndef CHANNELENABLINGMESSAGE
#define CHANNELENABLINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChannelEnablingMessage : public NetworkInterface {
public:
    unsigned int channel = 0;
    bool enable = false;
    unsigned int protocolId = 6237;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChannelEnablingMessage(ICustomDataInput &input);

    void _channelFunc(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif