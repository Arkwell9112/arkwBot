#ifndef GAMEROLEPLAYMOUNTINFORMATIONS
#define GAMEROLEPLAYMOUNTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "GameRolePlayNamedActorInformations.h"

class GameRolePlayMountInformations : public GameRolePlayNamedActorInformations {
public:
    std::string ownerName;
    unsigned int level = 0;
    unsigned int protocolId = 6918;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayMountInformations(ICustomDataInput &input);

    void _ownerNameFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif