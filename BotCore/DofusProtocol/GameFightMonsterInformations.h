#ifndef GAMEFIGHTMONSTERINFORMATIONS
#define GAMEFIGHTMONSTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightAIInformations.h"

class GameFightMonsterInformations : public GameFightAIInformations {
public:
    unsigned int creatureGenericId = 0;
    unsigned int creatureGrade = 0;
    unsigned int creatureLevel = 0;
    unsigned int protocolId = 3277;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightMonsterInformations(ICustomDataInput &input);

    void _creatureGenericIdFunc(ICustomDataInput &input);

    void _creatureGradeFunc(ICustomDataInput &input);

    void _creatureLevelFunc(ICustomDataInput &input);
};

#endif