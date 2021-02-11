#ifndef GAMEFIGHTFIGHTERMONSTERLIGHTINFORMATIONS
#define GAMEFIGHTFIGHTERMONSTERLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterLightInformations.h"

class GameFightFighterMonsterLightInformations : public GameFightFighterLightInformations {
public:
    unsigned int creatureGenericId = 0;
    unsigned int protocolId = 873;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterMonsterLightInformations(ICustomDataInput &input);

    void _creatureGenericIdFunc(ICustomDataInput &input);
};

#endif