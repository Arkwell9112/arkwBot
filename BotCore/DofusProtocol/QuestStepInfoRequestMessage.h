#ifndef QUESTSTEPINFOREQUESTMESSAGE
#define QUESTSTEPINFOREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestStepInfoRequestMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int protocolId = 8516;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestStepInfoRequestMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);
};

#endif