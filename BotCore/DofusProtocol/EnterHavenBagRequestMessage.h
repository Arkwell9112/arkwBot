#ifndef ENTERHAVENBAGREQUESTMESSAGE
#define ENTERHAVENBAGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EnterHavenBagRequestMessage : public NetworkInterface {
public:
    double havenBagOwner = 0;
    unsigned int protocolId = 9016;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EnterHavenBagRequestMessage(ICustomDataInput &input);

    void _havenBagOwnerFunc(ICustomDataInput &input);
};

#endif