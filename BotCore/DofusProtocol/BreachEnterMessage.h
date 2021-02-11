#ifndef BREACHENTERMESSAGE
#define BREACHENTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachEnterMessage : public NetworkInterface {
public:
    double owner = 0;
    unsigned int protocolId = 4149;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachEnterMessage(ICustomDataInput &input);

    void _ownerFunc(ICustomDataInput &input);
};

#endif