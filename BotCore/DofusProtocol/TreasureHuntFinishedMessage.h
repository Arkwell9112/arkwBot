#ifndef TREASUREHUNTFINISHEDMESSAGE
#define TREASUREHUNTFINISHEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntFinishedMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int protocolId = 7801;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntFinishedMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);
};

#endif