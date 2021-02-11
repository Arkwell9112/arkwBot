#ifndef GAMEFIGHTMUTANTINFORMATIONS
#define GAMEFIGHTMUTANTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterNamedInformations.h"

class GameFightMutantInformations : public GameFightFighterNamedInformations {
public:
    unsigned int powerLevel = 0;
    unsigned int protocolId = 7640;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightMutantInformations(ICustomDataInput &input);

    void _powerLevelFunc(ICustomDataInput &input);
};

#endif