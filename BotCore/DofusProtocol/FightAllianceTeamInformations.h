#ifndef FIGHTALLIANCETEAMINFORMATIONS
#define FIGHTALLIANCETEAMINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "FightTeamInformations.h"

class FightAllianceTeamInformations : public FightTeamInformations {
public:
    unsigned int relation = 0;
    unsigned int protocolId = 2266;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightAllianceTeamInformations(ICustomDataInput &input);

    void _relationFunc(ICustomDataInput &input);
};

#endif