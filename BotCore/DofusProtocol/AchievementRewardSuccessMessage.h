#ifndef ACHIEVEMENTREWARDSUCCESSMESSAGE
#define ACHIEVEMENTREWARDSUCCESSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementRewardSuccessMessage : public NetworkInterface {
public:
    int achievementId = 0;
    unsigned int protocolId = 8153;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementRewardSuccessMessage(ICustomDataInput &input);

    void _achievementIdFunc(ICustomDataInput &input);
};

#endif