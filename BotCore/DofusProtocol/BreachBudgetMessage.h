#ifndef BREACHBUDGETMESSAGE
#define BREACHBUDGETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachBudgetMessage : public NetworkInterface {
public:
    unsigned int bugdet = 0;
    unsigned int protocolId = 1956;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachBudgetMessage(ICustomDataInput &input);

    void _bugdetFunc(ICustomDataInput &input);
};

#endif