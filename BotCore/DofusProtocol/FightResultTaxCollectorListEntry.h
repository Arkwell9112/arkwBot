#ifndef FIGHTRESULTTAXCOLLECTORLISTENTRY
#define FIGHTRESULTTAXCOLLECTORLISTENTRY

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"
#include "FightResultFighterListEntry.h"

class FightResultTaxCollectorListEntry : public FightResultFighterListEntry {
public:
    unsigned int level = 0;
    BasicGuildInformations guildInfo;
    int experienceForGuild = 0;
    unsigned int protocolId = 2949;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightResultTaxCollectorListEntry(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _experienceForGuildFunc(ICustomDataInput &input);
};

#endif