#ifndef JOBBOOKSUBSCRIPTION
#define JOBBOOKSUBSCRIPTION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobBookSubscription : public NetworkInterface {
public:
    unsigned int jobId = 0;
    bool subscribed = false;
    unsigned int protocolId = 6367;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobBookSubscription(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);

    void _subscribedFunc(ICustomDataInput &input);
};

#endif