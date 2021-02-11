#ifndef GAMEROLEPLAYGROUPMONSTERWAVEINFORMATIONS
#define GAMEROLEPLAYGROUPMONSTERWAVEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GroupMonsterStaticInformations.h"
#include "GameRolePlayGroupMonsterInformations.h"

class GameRolePlayGroupMonsterWaveInformations : public GameRolePlayGroupMonsterInformations {
public:
    unsigned int nbWaves = 0;
    std::vector<GroupMonsterStaticInformations> alternatives;
    unsigned int protocolId = 521;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayGroupMonsterWaveInformations(ICustomDataInput &input);

    void _nbWavesFunc(ICustomDataInput &input);

    void _alternativesFunc(ICustomDataInput &input);
};

#endif