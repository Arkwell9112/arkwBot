#ifndef BASESPAWNMONSTERINFORMATION
#define BASESPAWNMONSTERINFORMATION

#include "../IO/ICustomDataInput.h"
#include "SpawnInformation.h"

class BaseSpawnMonsterInformation : public SpawnInformation {
public:
    unsigned int creatureGenericId = 0;
    unsigned int protocolId = 6339;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BaseSpawnMonsterInformation(ICustomDataInput &input);

    void _creatureGenericIdFunc(ICustomDataInput &input);
};

#endif