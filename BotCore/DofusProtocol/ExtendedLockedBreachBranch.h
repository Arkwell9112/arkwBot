#ifndef EXTENDEDLOCKEDBREACHBRANCH
#define EXTENDEDLOCKEDBREACHBRANCH

#include "../IO/ICustomDataInput.h"
#include "ExtendedBreachBranch.h"
#include "BreachBranch.h"

class ExtendedLockedBreachBranch : public ExtendedBreachBranch {
public:
    unsigned int unlockPrice = 0;
    unsigned int protocolId = 1746;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExtendedLockedBreachBranch(ICustomDataInput &input);

    void _unlockPriceFunc(ICustomDataInput &input);
};

#endif