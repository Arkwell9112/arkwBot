#ifndef ENABLEDCHANNELSMESSAGE
#define ENABLEDCHANNELSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class EnabledChannelsMessage : public NetworkInterface {
public:
    std::vector<unsigned int> channels;
    std::vector<unsigned int> disallowed;
    unsigned int protocolId = 535;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EnabledChannelsMessage(ICustomDataInput &input);

    void _channelsFunc(ICustomDataInput &input);

    void _disallowedFunc(ICustomDataInput &input);
};

#endif