#ifndef GAMEFIGHTMONSTERWITHALIGNMENTINFORMATIONS
#define GAMEFIGHTMONSTERWITHALIGNMENTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightMonsterInformations.h"
#include "ActorAlignmentInformations.h"

class GameFightMonsterWithAlignmentInformations : public GameFightMonsterInformations {
public:
    ActorAlignmentInformations alignmentInfos;
    unsigned int protocolId = 4758;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightMonsterWithAlignmentInformations(ICustomDataInput &input);
};

#endif