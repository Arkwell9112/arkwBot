#ifndef EXTENDEDBREACHBRANCH
#define EXTENDEDBREACHBRANCH

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "BreachReward.h"
#include "BreachBranch.h"

class ExtendedBreachBranch : public BreachBranch {
public:
    std::vector<BreachReward> rewards;
    int modifier = 0;
    unsigned int prize = 0;
    unsigned int protocolId = 6573;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExtendedBreachBranch(ICustomDataInput &input);

    void _rewardsFunc(ICustomDataInput &input);

    void _modifierFunc(ICustomDataInput &input);

    void _prizeFunc(ICustomDataInput &input);
};

#endif