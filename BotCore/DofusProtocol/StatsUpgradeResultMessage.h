#ifndef STATSUPGRADERESULTMESSAGE
#define STATSUPGRADERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StatsUpgradeResultMessage : public NetworkInterface {
public:
    int result = 0;
    unsigned int nbCharacBoost = 0;
    unsigned int protocolId = 4599;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatsUpgradeResultMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);

    void _nbCharacBoostFunc(ICustomDataInput &input);
};

#endif