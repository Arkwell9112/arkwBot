#ifndef ARENARANKINFOS
#define ARENARANKINFOS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ArenaRanking.h"
#include "ArenaLeagueRanking.h"

class ArenaRankInfos : public NetworkInterface {
public:
    ArenaRanking ranking;
    ArenaLeagueRanking leagueRanking;
    unsigned int victoryCount = 0;
    unsigned int fightcount = 0;
    unsigned int numFightNeededForLadder = 0;
    unsigned int protocolId = 7149;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ArenaRankInfos(ICustomDataInput &input);

    void _victoryCountFunc(ICustomDataInput &input);

    void _fightcountFunc(ICustomDataInput &input);

    void _numFightNeededForLadderFunc(ICustomDataInput &input);
};

#endif