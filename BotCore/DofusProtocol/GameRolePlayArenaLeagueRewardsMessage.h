#ifndef GAMEROLEPLAYARENALEAGUEREWARDSMESSAGE
#define GAMEROLEPLAYARENALEAGUEREWARDSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayArenaLeagueRewardsMessage : public NetworkInterface {
public:
    unsigned int seasonId = 0;
    unsigned int leagueId = 0;
    int ladderPosition = 0;
    bool endSeasonReward = false;
    unsigned int protocolId = 9501;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaLeagueRewardsMessage(ICustomDataInput &input);

    void _seasonIdFunc(ICustomDataInput &input);

    void _leagueIdFunc(ICustomDataInput &input);

    void _ladderPositionFunc(ICustomDataInput &input);

    void _endSeasonRewardFunc(ICustomDataInput &input);
};

#endif