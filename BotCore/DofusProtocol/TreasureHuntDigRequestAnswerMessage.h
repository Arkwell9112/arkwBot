#ifndef TREASUREHUNTDIGREQUESTANSWERMESSAGE
#define TREASUREHUNTDIGREQUESTANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntDigRequestAnswerMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int result = 0;
    unsigned int protocolId = 7440;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntDigRequestAnswerMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif