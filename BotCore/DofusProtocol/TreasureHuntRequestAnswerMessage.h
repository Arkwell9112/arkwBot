#ifndef TREASUREHUNTREQUESTANSWERMESSAGE
#define TREASUREHUNTREQUESTANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntRequestAnswerMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int result = 0;
    unsigned int protocolId = 8473;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntRequestAnswerMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif