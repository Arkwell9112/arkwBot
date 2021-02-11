#ifndef QUESTACTIVEINFORMATIONS
#define QUESTACTIVEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestActiveInformations : public NetworkInterface {
public:
    unsigned int questId = 0;
    unsigned int protocolId = 2413;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestActiveInformations(ICustomDataInput &input);

    void _questIdFunc(ICustomDataInput &input);
};

#endif