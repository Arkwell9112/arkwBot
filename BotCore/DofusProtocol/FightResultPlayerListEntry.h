#ifndef FIGHTRESULTPLAYERLISTENTRY
#define FIGHTRESULTPLAYERLISTENTRY

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "FightResultFighterListEntry.h"
#include "FightResultAdditionalData.h"

class FightResultPlayerListEntry : public FightResultFighterListEntry {
public:
    unsigned int level = 0;
    std::vector<FightResultAdditionalData> additional;
    unsigned int protocolId = 1038;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultPlayerListEntry(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _additionalFunc(ICustomDataInput &input);
};

#endif