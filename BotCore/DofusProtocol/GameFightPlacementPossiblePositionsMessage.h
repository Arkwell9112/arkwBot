#ifndef GAMEFIGHTPLACEMENTPOSSIBLEPOSITIONSMESSAGE
#define GAMEFIGHTPLACEMENTPOSSIBLEPOSITIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameFightPlacementPossiblePositionsMessage : public NetworkInterface {
public:
    std::vector<unsigned int> positionsForChallengers;
    std::vector<unsigned int> positionsForDefenders;
    unsigned int teamNumber = 2;
    unsigned int protocolId = 8925;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementPossiblePositionsMessage(ICustomDataInput &input);

    void _positionsForChallengersFunc(ICustomDataInput &input);

    void _positionsForDefendersFunc(ICustomDataInput &input);

    void _teamNumberFunc(ICustomDataInput &input);
};

#endif