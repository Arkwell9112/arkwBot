#ifndef ARENALEAGUERANKING
#define ARENALEAGUERANKING

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ArenaLeagueRanking : public NetworkInterface {
public:
    unsigned int rank = 0;
    unsigned int leagueId = 0;
    int leaguePoints = 0;
    int totalLeaguePoints = 0;
    int ladderPosition = 0;
    unsigned int protocolId = 8886;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ArenaLeagueRanking(ICustomDataInput &input);

    void _rankFunc(ICustomDataInput &input);

    void _leagueIdFunc(ICustomDataInput &input);

    void _leaguePointsFunc(ICustomDataInput &input);

    void _totalLeaguePointsFunc(ICustomDataInput &input);

    void _ladderPositionFunc(ICustomDataInput &input);
};

#endif