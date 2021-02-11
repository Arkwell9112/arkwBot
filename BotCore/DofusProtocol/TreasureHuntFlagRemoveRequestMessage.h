#ifndef TREASUREHUNTFLAGREMOVEREQUESTMESSAGE
#define TREASUREHUNTFLAGREMOVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TreasureHuntFlag.h"

class TreasureHuntFlagRemoveRequestMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int index = 0;
    unsigned int protocolId = 5487;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntFlagRemoveRequestMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _indexFunc(ICustomDataInput &input);
};

#endif