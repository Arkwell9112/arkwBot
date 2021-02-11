#ifndef GAMEFIGHTUPDATETEAMMESSAGE
#define GAMEFIGHTUPDATETEAMMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FightTeamInformations.h"

class GameFightUpdateTeamMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    FightTeamInformations team;
    unsigned int protocolId = 5570;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightUpdateTeamMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif