#ifndef FIGHTSTARTINGPOSITIONS
#define FIGHTSTARTINGPOSITIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class FightStartingPositions : public NetworkInterface {
public:
    std::vector<unsigned int> positionsForChallengers;
    std::vector<unsigned int> positionsForDefenders;
    unsigned int protocolId = 637;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightStartingPositions(ICustomDataInput &input);

    void _positionsForChallengersFunc(ICustomDataInput &input);

    void _positionsForDefendersFunc(ICustomDataInput &input);
};

#endif