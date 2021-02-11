#ifndef BASICPINGMESSAGE
#define BASICPINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicPingMessage : public NetworkInterface {
public:
    bool quiet = false;
    unsigned int protocolId = 9405;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicPingMessage(ICustomDataInput &input);

    void _quietFunc(ICustomDataInput &input);
};

#endif