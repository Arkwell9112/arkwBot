#ifndef ACHIEVEMENTFINISHEDINFORMATIONMESSAGE
#define ACHIEVEMENTFINISHEDINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "Achievement.h"
#include "AchievementFinishedMessage.h"

class AchievementFinishedInformationMessage : public AchievementFinishedMessage {
public:
    std::string name;
    double playerId = 0;
    unsigned int protocolId = 3560;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementFinishedInformationMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif