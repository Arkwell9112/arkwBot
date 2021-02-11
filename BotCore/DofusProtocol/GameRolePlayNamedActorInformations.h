#ifndef GAMEROLEPLAYNAMEDACTORINFORMATIONS
#define GAMEROLEPLAYNAMEDACTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "GameRolePlayActorInformations.h"

class GameRolePlayNamedActorInformations : public GameRolePlayActorInformations {
public:
    std::string name;
    unsigned int protocolId = 6486;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayNamedActorInformations(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif