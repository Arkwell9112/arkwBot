#ifndef GAMEFIGHTENDMESSAGE
#define GAMEFIGHTENDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "NamedPartyTeamWithOutcome.h"
#include "NamedPartyTeam.h"
#include "FightResultListEntry.h"

class GameFightEndMessage : public NetworkInterface {
public:
    unsigned int duration = 0;
    int rewardRate = 0;
    int lootShareLimitMalus = 0;
    std::vector<FightResultListEntry> results;
    std::vector<NamedPartyTeamWithOutcome> namedPartyTeamsOutcomes;
    unsigned int protocolId = 9567;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightEndMessage(ICustomDataInput &input);

    void _durationFunc(ICustomDataInput &input);

    void _rewardRateFunc(ICustomDataInput &input);

    void _lootShareLimitMalusFunc(ICustomDataInput &input);

    void _resultsFunc(ICustomDataInput &input);

    void _namedPartyTeamsOutcomesFunc(ICustomDataInput &input);
};

#endif