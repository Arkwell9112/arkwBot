#ifndef QUESTSTARTREQUESTMESSAGE
#define QUESTSTARTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestStartRequestMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int protocolId = 7960;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestStartRequestMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);
};

#endif