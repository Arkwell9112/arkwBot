#ifndef TREASUREHUNTLEGENDARYREQUESTMESSAGE
#define TREASUREHUNTLEGENDARYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntLegendaryRequestMessage : public NetworkInterface {
public:
    unsigned int legendaryId = 0;
    unsigned int protocolId = 823;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntLegendaryRequestMessage(ICustomDataInput &input);

    void _legendaryIdFunc(ICustomDataInput &input);
};

#endif