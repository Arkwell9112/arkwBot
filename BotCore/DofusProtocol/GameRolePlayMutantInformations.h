#ifndef GAMEROLEPLAYMUTANTINFORMATIONS
#define GAMEROLEPLAYMUTANTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayHumanoidInformations.h"

class GameRolePlayMutantInformations : public GameRolePlayHumanoidInformations {
public:
    unsigned int monsterId = 0;
    int powerLevel = 0;
    unsigned int protocolId = 1099;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayMutantInformations(ICustomDataInput &input);

    void _monsterIdFunc(ICustomDataInput &input);

    void _powerLevelFunc(ICustomDataInput &input);
};

#endif