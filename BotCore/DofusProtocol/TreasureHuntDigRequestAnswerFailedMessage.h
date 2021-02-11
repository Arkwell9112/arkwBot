#ifndef TREASUREHUNTDIGREQUESTANSWERFAILEDMESSAGE
#define TREASUREHUNTDIGREQUESTANSWERFAILEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "TreasureHuntDigRequestAnswerMessage.h"

class TreasureHuntDigRequestAnswerFailedMessage : public TreasureHuntDigRequestAnswerMessage {
public:
    unsigned int wrongFlagCount = 0;
    unsigned int protocolId = 7642;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntDigRequestAnswerFailedMessage(ICustomDataInput &input);

    void _wrongFlagCountFunc(ICustomDataInput &input);
};

#endif