#ifndef SPAWNCOMPANIONINFORMATION
#define SPAWNCOMPANIONINFORMATION

#include "../IO/ICustomDataInput.h"
#include "SpawnInformation.h"

class SpawnCompanionInformation : public SpawnInformation {
public:
    unsigned int modelId = 0;
    unsigned int level = 0;
    double summonerId = 0;
    double ownerId = 0;
    unsigned int protocolId = 2859;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpawnCompanionInformation(ICustomDataInput &input);

    void _modelIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _summonerIdFunc(ICustomDataInput &input);

    void _ownerIdFunc(ICustomDataInput &input);
};

#endif