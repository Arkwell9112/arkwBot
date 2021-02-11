#ifndef GAMEROLEPLAYPORTALINFORMATIONS
#define GAMEROLEPLAYPORTALINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "PortalInformation.h"
#include "GameRolePlayActorInformations.h"

class GameRolePlayPortalInformations : public GameRolePlayActorInformations {
public:
    PortalInformation portal;
    unsigned int protocolId = 3053;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPortalInformations(ICustomDataInput &input);
};

#endif