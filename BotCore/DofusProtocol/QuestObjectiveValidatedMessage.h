#ifndef QUESTOBJECTIVEVALIDATEDMESSAGE
#define QUESTOBJECTIVEVALIDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestObjectiveValidatedMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int objectiveId = 0;
    unsigned int protocolId = 9597;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestObjectiveValidatedMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);

    void _objectiveIdFunc(ICustomDataInput &input);
};

#endif