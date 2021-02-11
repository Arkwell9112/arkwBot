#ifndef FIGHTTEAMMEMBERTAXCOLLECTORINFORMATIONS
#define FIGHTTEAMMEMBERTAXCOLLECTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorInformations.h"
#include "FightTeamMemberInformations.h"

class FightTeamMemberTaxCollectorInformations : public FightTeamMemberInformations {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    unsigned int level = 0;
    unsigned int guildId = 0;
    double uid = 0;
    unsigned int protocolId = 1174;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamMemberTaxCollectorInformations(ICustomDataInput &input);

    void _firstNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);

    void _uidFunc(ICustomDataInput &input);
};

#endif