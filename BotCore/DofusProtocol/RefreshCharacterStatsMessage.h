#ifndef REFRESHCHARACTERSTATSMESSAGE
#define REFRESHCHARACTERSTATSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GameFightMinimalStats.h"

class RefreshCharacterStatsMessage : public NetworkInterface {
public:
    double fighterId = 0;
    GameFightMinimalStats stats;
    unsigned int protocolId = 6276;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_RefreshCharacterStatsMessage(ICustomDataInput &input);

    void _fighterIdFunc(ICustomDataInput &input);
};

#endif