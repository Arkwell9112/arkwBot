#ifndef FIGHTRESULTMUTANTLISTENTRY
#define FIGHTRESULTMUTANTLISTENTRY

#include "../IO/ICustomDataInput.h"
#include "FightResultFighterListEntry.h"

class FightResultMutantListEntry : public FightResultFighterListEntry {
public:
    unsigned int level = 0;
    unsigned int protocolId = 3438;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultMutantListEntry(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif