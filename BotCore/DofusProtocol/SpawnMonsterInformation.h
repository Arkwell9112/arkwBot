#ifndef SPAWNMONSTERINFORMATION
#define SPAWNMONSTERINFORMATION

#include "../IO/ICustomDataInput.h"
#include "BaseSpawnMonsterInformation.h"

class SpawnMonsterInformation : public BaseSpawnMonsterInformation {
public:
    unsigned int creatureGrade = 0;
    unsigned int protocolId = 5401;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpawnMonsterInformation(ICustomDataInput &input);

    void _creatureGradeFunc(ICustomDataInput &input);
};

#endif