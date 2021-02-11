#ifndef GAMEROLEPLAYHUMANOIDINFORMATIONS
#define GAMEROLEPLAYHUMANOIDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "HumanInformations.h"
#include "GameRolePlayNamedActorInformations.h"

class GameRolePlayHumanoidInformations : public GameRolePlayNamedActorInformations {
public:
    HumanInformations humanoidInfo;
    unsigned int accountId = 0;
    unsigned int protocolId = 1689;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayHumanoidInformations(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);
};

#endif