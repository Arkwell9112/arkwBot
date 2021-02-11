#ifndef UNFOLLOWQUESTOBJECTIVEREQUESTMESSAGE
#define UNFOLLOWQUESTOBJECTIVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class UnfollowQuestObjectiveRequestMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    int objectiveId = 0;
    unsigned int protocolId = 7700;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UnfollowQuestObjectiveRequestMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);

    void _objectiveIdFunc(ICustomDataInput &input);
};

#endif