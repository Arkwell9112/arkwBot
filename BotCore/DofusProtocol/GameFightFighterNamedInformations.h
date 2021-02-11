#ifndef GAMEFIGHTFIGHTERNAMEDINFORMATIONS
#define GAMEFIGHTFIGHTERNAMEDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "GameFightFighterInformations.h"
#include "PlayerStatus.h"

class GameFightFighterNamedInformations : public GameFightFighterInformations {
public:
    std::string name;
    PlayerStatus status;
    int leagueId = 0;
    int ladderPosition = 0;
    bool hiddenInPrefight = false;
    unsigned int protocolId = 5594;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterNamedInformations(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _leagueIdFunc(ICustomDataInput &input);

    void _ladderPositionFunc(ICustomDataInput &input);

    void _hiddenInPrefightFunc(ICustomDataInput &input);
};

#endif