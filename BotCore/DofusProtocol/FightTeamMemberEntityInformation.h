#ifndef FIGHTTEAMMEMBERENTITYINFORMATION
#define FIGHTTEAMMEMBERENTITYINFORMATION

#include "../IO/ICustomDataInput.h"
#include "FightTeamMemberInformations.h"
#include "EntityInformation.h"

class FightTeamMemberEntityInformation : public FightTeamMemberInformations {
public:
    unsigned int entityModelId = 0;
    unsigned int level = 0;
    double masterId = 0;
    unsigned int protocolId = 4686;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamMemberEntityInformation(ICustomDataInput &input);

    void _entityModelIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _masterIdFunc(ICustomDataInput &input);
};

#endif