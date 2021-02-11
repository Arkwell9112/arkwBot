#ifndef JOBBOOKSUBSCRIPTIONMESSAGE
#define JOBBOOKSUBSCRIPTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "JobBookSubscription.h"

class JobBookSubscriptionMessage : public NetworkInterface {
public:
    std::vector<JobBookSubscription> subscriptions;
    unsigned int protocolId = 2965;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobBookSubscriptionMessage(ICustomDataInput &input);

    void _subscriptionsFunc(ICustomDataInput &input);
};

#endif