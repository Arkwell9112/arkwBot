#ifndef QUESTVALIDATEDMESSAGE
#define QUESTVALIDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestValidatedMessage : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int protocolId = 9811;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestValidatedMessage(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);
};

#endif