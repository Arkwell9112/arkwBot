#ifndef SUBSCRIPTIONZONEMESSAGE
#define SUBSCRIPTIONZONEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SubscriptionZoneMessage : public NetworkInterface {
public:
    bool active = false;
    unsigned int protocolId = 5758;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SubscriptionZoneMessage(ICustomDataInput &input);

    void _activeFunc(ICustomDataInput &input);
};

#endif