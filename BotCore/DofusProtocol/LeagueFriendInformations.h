#ifndef LEAGUEFRIENDINFORMATIONS
#define LEAGUEFRIENDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "FriendInformations.h"
#include "AbstractContactInformations.h"

class LeagueFriendInformations : public AbstractContactInformations {
public:
    double playerId = 0;
    std::string playerName;
    int breed = 0;
    bool sex = false;
    unsigned int level = 0;
    int leagueId = 0;
    int totalLeaguePoints = 0;
    int ladderPosition = 0;
    unsigned int protocolId = 4263;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LeagueFriendInformations(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _leagueIdFunc(ICustomDataInput &input);

    void _totalLeaguePointsFunc(ICustomDataInput &input);

    void _ladderPositionFunc(ICustomDataInput &input);
};

#endif