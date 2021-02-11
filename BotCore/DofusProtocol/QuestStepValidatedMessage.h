#ifndef QUESTSTEPVALIDATEDMESSAGE
#define QUESTSTEPVALIDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestStepValidatedMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int stepId = 0;
    unsigned int protocolId = 5695;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestStepValidatedMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);

    void _stepIdFunc(ICustomDataInput &input);
};

#endif