#ifndef ACHIEVEMENTACHIEVED
#define ACHIEVEMENTACHIEVED

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementAchieved : public NetworkInterface {
public:
    unsigned int id = 0;
    double achievedBy = 0;
    unsigned int protocolId = 4690;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementAchieved(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _achievedByFunc(ICustomDataInput &input);
};

#endif