#ifndef EXITHAVENBAGREQUESTMESSAGE
#define EXITHAVENBAGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExitHavenBagRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3399;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExitHavenBagRequestMessage(ICustomDataInput &input);
};

#endif