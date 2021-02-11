#ifndef ARENARANKING
#define ARENARANKING

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ArenaRanking : public NetworkInterface {
public:
    unsigned int rank = 0;
    unsigned int bestRank = 0;
    unsigned int protocolId = 5200;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ArenaRanking(ICustomDataInput &input);

    void _rankFunc(ICustomDataInput &input);

    void _bestRankFunc(ICustomDataInput &input);
};

#endif