#ifndef FOLLOWEDQUESTSMESSAGE
#define FOLLOWEDQUESTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "QuestActiveDetailedInformations.h"

class FollowedQuestsMessage : public NetworkInterface {
public:
    std::vector<QuestActiveDetailedInformations> quests;
    unsigned int protocolId = 7561;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FollowedQuestsMessage(ICustomDataInput &input);

    void _questsFunc(ICustomDataInput &input);
};

#endif