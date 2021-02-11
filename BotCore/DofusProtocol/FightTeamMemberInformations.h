#ifndef FIGHTTEAMMEMBERINFORMATIONS
#define FIGHTTEAMMEMBERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FightTeamMemberInformations : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 4681;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamMemberInformations(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif