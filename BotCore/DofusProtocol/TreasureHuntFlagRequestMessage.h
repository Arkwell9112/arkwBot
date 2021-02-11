#ifndef TREASUREHUNTFLAGREQUESTMESSAGE
#define TREASUREHUNTFLAGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TreasureHuntFlag.h"

class TreasureHuntFlagRequestMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int index = 0;
    unsigned int protocolId = 1781;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntFlagRequestMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _indexFunc(ICustomDataInput &input);
};

#endif