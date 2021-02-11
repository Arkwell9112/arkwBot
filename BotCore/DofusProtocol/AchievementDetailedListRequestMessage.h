#ifndef ACHIEVEMENTDETAILEDLISTREQUESTMESSAGE
#define ACHIEVEMENTDETAILEDLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementDetailedListRequestMessage : public NetworkInterface {
public:
    unsigned int categoryId = 0;
    unsigned int protocolId = 2519;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementDetailedListRequestMessage(ICustomDataInput &input);

    void _categoryIdFunc(ICustomDataInput &input);
};

#endif