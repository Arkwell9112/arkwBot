#ifndef ACHIEVEMENTREWARDERRORMESSAGE
#define ACHIEVEMENTREWARDERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementRewardErrorMessage : public NetworkInterface {
public:
    int achievementId = 0;
    unsigned int protocolId = 7005;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementRewardErrorMessage(ICustomDataInput &input);

    void _achievementIdFunc(ICustomDataInput &input);
};

#endif