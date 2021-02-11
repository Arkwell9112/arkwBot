#ifndef GAMECONTEXTSUMMONSINFORMATION
#define GAMECONTEXTSUMMONSINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "SpawnInformation.h"
#include "GameFightMinimalStats.h"
#include "GameContextBasicSpawnInformation.h"
#include "EntityLook.h"

class GameContextSummonsInformation : public NetworkInterface {
public:
    SpawnInformation spawnInformation;
    unsigned int wave = 0;
    EntityLook look;
    GameFightMinimalStats stats;
    std::vector<GameContextBasicSpawnInformation> summons;
    unsigned int protocolId = 3995;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextSummonsInformation(ICustomDataInput &input);

    void _waveFunc(ICustomDataInput &input);

    void _summonsFunc(ICustomDataInput &input);
};

#endif