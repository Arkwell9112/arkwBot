#ifndef KICKHAVENBAGREQUESTMESSAGE
#define KICKHAVENBAGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class KickHavenBagRequestMessage : public NetworkInterface {
public:
    double guestId = 0;
    unsigned int protocolId = 9456;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_KickHavenBagRequestMessage(ICustomDataInput &input);

    void _guestIdFunc(ICustomDataInput &input);
};

#endif