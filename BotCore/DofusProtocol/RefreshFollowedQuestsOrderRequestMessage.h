#ifndef REFRESHFOLLOWEDQUESTSORDERREQUESTMESSAGE
#define REFRESHFOLLOWEDQUESTSORDERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class RefreshFollowedQuestsOrderRequestMessage : public NetworkInterface {
public:
    std::vector<unsigned int> quests;
    unsigned int protocolId = 4245;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_RefreshFollowedQuestsOrderRequestMessage(ICustomDataInput &input);

    void _questsFunc(ICustomDataInput &input);
};

#endif