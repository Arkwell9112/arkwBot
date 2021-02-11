#ifndef BASICPONGMESSAGE
#define BASICPONGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicPongMessage : public NetworkInterface {
public:
    bool quiet = false;
    unsigned int protocolId = 1734;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicPongMessage(ICustomDataInput &input);

    void _quietFunc(ICustomDataInput &input);
};

#endif