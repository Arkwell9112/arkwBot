#ifndef BREACHKICKREQUESTMESSAGE
#define BREACHKICKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachKickRequestMessage : public NetworkInterface {
public:
    double target = 0;
    unsigned int protocolId = 6032;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachKickRequestMessage(ICustomDataInput &input);

    void _targetFunc(ICustomDataInput &input);
};

#endif