#ifndef QUESTSTEPSTARTEDMESSAGE
#define QUESTSTEPSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestStepStartedMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int stepId = 0;
    unsigned int protocolId = 3800;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestStepStartedMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);

    void _stepIdFunc(ICustomDataInput &input);
};

#endif