#ifndef SPAWNSCALEDMONSTERINFORMATION
#define SPAWNSCALEDMONSTERINFORMATION

#include "../IO/ICustomDataInput.h"
#include "SpawnMonsterInformation.h"
#include "BaseSpawnMonsterInformation.h"

class SpawnScaledMonsterInformation : public BaseSpawnMonsterInformation {
public:
    unsigned int creatureLevel = 0;
    unsigned int protocolId = 1659;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpawnScaledMonsterInformation(ICustomDataInput &input);

    void _creatureLevelFunc(ICustomDataInput &input);
};

#endif