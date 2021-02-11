#ifndef TREASUREHUNTAVAILABLERETRYCOUNTUPDATEMESSAGE
#define TREASUREHUNTAVAILABLERETRYCOUNTUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntAvailableRetryCountUpdateMessage : public NetworkInterface {
public:
    unsigned int questType = 0;
    int availableRetryCount = 0;
    unsigned int protocolId = 2832;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntAvailableRetryCountUpdateMessage(ICustomDataInput &input);

    void _questTypeFunc(ICustomDataInput &input);

    void _availableRetryCountFunc(ICustomDataInput &input);
};

#endif