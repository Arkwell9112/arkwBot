#ifndef QUESTOBJECTIVEVALIDATIONMESSAGE
#define QUESTOBJECTIVEVALIDATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestObjectiveValidationMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int objectiveId = 0;
    unsigned int protocolId = 4674;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestObjectiveValidationMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);

    void _objectiveIdFunc(ICustomDataInput &input);
};

#endif