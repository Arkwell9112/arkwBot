#ifndef TREASUREHUNTFLAGREQUESTANSWERMESSAGE
#define TREASUREHUNTFLAGREQUESTANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TreasureHuntFlag.h"

class TreasureHuntFlagRequestAnswerMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int result = 0;
    unsigned int index = 0;
    unsigned int protocolId = 8339;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntFlagRequestAnswerMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);

    void _indexFunc(ICustomDataInput &input);
};

#endif