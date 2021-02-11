#ifndef GAMEROLEPLAYTAXCOLLECTORINFORMATIONS
#define GAMEROLEPLAYTAXCOLLECTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorInformations.h"
#include "GameRolePlayActorInformations.h"
#include "TaxCollectorStaticInformations.h"

class GameRolePlayTaxCollectorInformations : public GameRolePlayActorInformations {
public:
    TaxCollectorStaticInformations identification;
    unsigned int guildLevel = 0;
    int taxCollectorAttack = 0;
    unsigned int protocolId = 487;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayTaxCollectorInformations(ICustomDataInput &input);

    void _guildLevelFunc(ICustomDataInput &input);

    void _taxCollectorAttackFunc(ICustomDataInput &input);
};

#endif