#ifndef QUESTSTEPINFOMESSAGE
#define QUESTSTEPINFOMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "QuestActiveInformations.h"

class QuestStepInfoMessage : public NetworkInterface {
public:
    QuestActiveInformations infos;
    unsigned int protocolId = 3335;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestStepInfoMessage(ICustomDataInput &input);
};

#endif