#ifndef FIGHTRESULTFIGHTERLISTENTRY
#define FIGHTRESULTFIGHTERLISTENTRY

#include "../IO/ICustomDataInput.h"
#include "FightResultListEntry.h"

class FightResultFighterListEntry : public FightResultListEntry {
public:
    double id = 0;
    bool alive = false;
    unsigned int protocolId = 1126;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultFighterListEntry(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _aliveFunc(ICustomDataInput &input);
};

#endif