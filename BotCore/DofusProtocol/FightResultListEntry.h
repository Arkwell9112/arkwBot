#ifndef FIGHTRESULTLISTENTRY
#define FIGHTRESULTLISTENTRY

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FightLoot.h"

class FightResultListEntry : public NetworkInterface {
public:
    unsigned int outcome = 0;
    unsigned int wave = 0;
    FightLoot rewards;
    unsigned int protocolId = 9494;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultListEntry(ICustomDataInput &input);

    void _outcomeFunc(ICustomDataInput &input);

    void _waveFunc(ICustomDataInput &input);
};

#endif