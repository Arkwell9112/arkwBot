#ifndef GAMEFIGHTFIGHTERINFORMATIONS
#define GAMEFIGHTFIGHTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "SpawnInformation.h"
#include "GameFightMinimalStats.h"
#include "GameContextBasicSpawnInformation.h"
#include "GameContextActorInformations.h"

class GameFightFighterInformations : public GameContextActorInformations {
public:
    GameContextBasicSpawnInformation spawnInfo;
    unsigned int wave = 0;
    GameFightMinimalStats stats;
    std::vector<unsigned int> previousPositions;
    unsigned int protocolId = 6298;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterInformations(ICustomDataInput &input);

    void _waveFunc(ICustomDataInput &input);

    void _previousPositionsFunc(ICustomDataInput &input);
};

#endif