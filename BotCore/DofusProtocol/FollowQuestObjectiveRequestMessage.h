#ifndef FOLLOWQUESTOBJECTIVEREQUESTMESSAGE
#define FOLLOWQUESTOBJECTIVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FollowQuestObjectiveRequestMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    int objectiveId = 0;
    unsigned int protocolId = 1214;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FollowQuestObjectiveRequestMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);

    void _objectiveIdFunc(ICustomDataInput &input);
};

#endif