#ifndef FIGHTCOMMONINFORMATIONS
#define FIGHTCOMMONINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "FightTeamInformations.h"
#include "FightOptionsInformations.h"

class FightCommonInformations : public NetworkInterface {
public:
    unsigned int fightId = 0;
    unsigned int fightType = 0;
    std::vector<FightTeamInformations> fightTeams;
    std::vector<unsigned int> fightTeamsPositions;
    std::vector<FightOptionsInformations> fightTeamsOptions;
    unsigned int protocolId = 1954;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightCommonInformations(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _fightTypeFunc(ICustomDataInput &input);

    void _fightTeamsFunc(ICustomDataInput &input);

    void _fightTeamsPositionsFunc(ICustomDataInput &input);

    void _fightTeamsOptionsFunc(ICustomDataInput &input);
};

#endif