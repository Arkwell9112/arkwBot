#ifndef SUBSCRIPTIONLIMITATIONMESSAGE
#define SUBSCRIPTIONLIMITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SubscriptionLimitationMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 3571;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SubscriptionLimitationMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif