#ifndef TREASUREHUNTGIVEUPREQUESTMESSAGE
#define TREASUREHUNTGIVEUPREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntGiveUpRequestMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    unsigned int protocolId = 33;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntGiveUpRequestMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);
};

#endif