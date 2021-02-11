#ifndef ACHIEVEMENTDETAILSMESSAGE
#define ACHIEVEMENTDETAILSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementDetailsMessage : public NetworkInterface {
public:
    Achievement achievement;
    unsigned int protocolId = 7911;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementDetailsMessage(ICustomDataInput &input);
};

#endif