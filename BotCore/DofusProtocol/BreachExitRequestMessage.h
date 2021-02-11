#ifndef BREACHEXITREQUESTMESSAGE
#define BREACHEXITREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachExitRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6722;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachExitRequestMessage(ICustomDataInput &input);
};

#endif