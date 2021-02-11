#ifndef BREACHEXITRESPONSEMESSAGE
#define BREACHEXITRESPONSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachExitResponseMessage : public NetworkInterface {
public:
    bool exited = false;
    unsigned int protocolId = 9718;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachExitResponseMessage(ICustomDataInput &input);

    void _exitedFunc(ICustomDataInput &input);
};

#endif