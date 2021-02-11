#ifndef QUESTSTARTEDMESSAGE
#define QUESTSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestStartedMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int protocolId = 428;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestStartedMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);
};

#endif