#ifndef TREASUREHUNTDIGREQUESTMESSAGE
#define TREASUREHUNTDIGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntDigRequestMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int protocolId = 558;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntDigRequestMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);
};

#endif