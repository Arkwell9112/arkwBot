#ifndef ACHIEVEMENTSTARTEDOBJECTIVE
#define ACHIEVEMENTSTARTEDOBJECTIVE

#include "../IO/ICustomDataInput.h"
#include "AchievementObjective.h"

class AchievementStartedObjective : public AchievementObjective {
public:
    unsigned int value = 0;
    unsigned int protocolId = 6439;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementStartedObjective(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif