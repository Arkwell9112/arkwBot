#ifndef ACHIEVEMENTALMOSTFINISHEDDETAILEDLISTREQUESTMESSAGE
#define ACHIEVEMENTALMOSTFINISHEDDETAILEDLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementAlmostFinishedDetailedListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3876;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementAlmostFinishedDetailedListRequestMessage(ICustomDataInput &input);
};

#endif