#ifndef BREACHREWARDSMESSAGE
#define BREACHREWARDSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "BreachReward.h"

class BreachRewardsMessage : public NetworkInterface {
public:
    std::vector<BreachReward> rewards;
    unsigned int protocolId = 3566;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachRewardsMessage(ICustomDataInput &input);

    void _rewardsFunc(ICustomDataInput &input);
};

#endif