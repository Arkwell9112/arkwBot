#ifndef GAMEROLEPLAYACTORINFORMATIONS
#define GAMEROLEPLAYACTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameContextActorInformations.h"

class GameRolePlayActorInformations : public GameContextActorInformations {
public:
    unsigned int protocolId = 3191;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayActorInformations(ICustomDataInput &input);
};

#endif