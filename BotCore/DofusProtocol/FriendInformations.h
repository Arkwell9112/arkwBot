#ifndef FRIENDINFORMATIONS
#define FRIENDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "AbstractContactInformations.h"

class FriendInformations : public AbstractContactInformations {
public:
    unsigned int playerState = 99;
    unsigned int lastConnection = 0;
    int achievementPoints = 0;
    int leagueId = 0;
    int ladderPosition = 0;
    unsigned int protocolId = 1820;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendInformations(ICustomDataInput &input);

    void _playerStateFunc(ICustomDataInput &input);

    void _lastConnectionFunc(ICustomDataInput &input);

    void _achievementPointsFunc(ICustomDataInput &input);

    void _leagueIdFunc(ICustomDataInput &input);

    void _ladderPositionFunc(ICustomDataInput &input);
};

#endif