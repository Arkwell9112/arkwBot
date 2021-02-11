#ifndef FIGHTEXTERNALINFORMATIONS
#define FIGHTEXTERNALINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "FightTeamLightInformations.h"
#include "FightOptionsInformations.h"

class FightExternalInformations : public NetworkInterface {
public:
    unsigned int fightId = 0;
    unsigned int fightType = 0;
    unsigned int fightStart = 0;
    bool fightSpectatorLocked = false;
    std::vector<FightTeamLightInformations> fightTeams;
    std::vector<FightOptionsInformations> fightTeamsOptions;
    unsigned int protocolId = 4455;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightExternalInformations(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _fightTypeFunc(ICustomDataInput &input);

    void _fightStartFunc(ICustomDataInput &input);

    void _fightSpectatorLockedFunc(ICustomDataInput &input);

    void _fightTeamsFunc(ICustomDataInput &input);

    void _fightTeamsOptionsFunc(ICustomDataInput &input);
};

#endif