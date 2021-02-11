#ifndef BASICWHOAMIREQUESTMESSAGE
#define BASICWHOAMIREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicWhoAmIRequestMessage : public NetworkInterface {
public:
    bool verbose = false;
    unsigned int protocolId = 3977;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicWhoAmIRequestMessage(ICustomDataInput &input);

    void _verboseFunc(ICustomDataInput &input);
};

#endif