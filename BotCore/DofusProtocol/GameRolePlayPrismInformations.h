#ifndef GAMEROLEPLAYPRISMINFORMATIONS
#define GAMEROLEPLAYPRISMINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayActorInformations.h"
#include "PrismInformation.h"

class GameRolePlayPrismInformations : public GameRolePlayActorInformations {
public:
    PrismInformation prism;
    unsigned int protocolId = 4866;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPrismInformations(ICustomDataInput &input);
};

#endif