#ifndef GAMEROLEPLAYCHARACTERINFORMATIONS
#define GAMEROLEPLAYCHARACTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayHumanoidInformations.h"
#include "ActorAlignmentInformations.h"

class GameRolePlayCharacterInformations : public GameRolePlayHumanoidInformations {
public:
    ActorAlignmentInformations alignmentInfos;
    unsigned int protocolId = 3034;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayCharacterInformations(ICustomDataInput &input);
};

#endif