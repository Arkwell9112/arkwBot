#ifndef ACHIEVEMENTDETAILSREQUESTMESSAGE
#define ACHIEVEMENTDETAILSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementDetailsRequestMessage : public NetworkInterface {
public:
    unsigned int achievementId = 0;
    unsigned int protocolId = 778;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementDetailsRequestMessage(ICustomDataInput &input);

    void _achievementIdFunc(ICustomDataInput &input);
};

#endif