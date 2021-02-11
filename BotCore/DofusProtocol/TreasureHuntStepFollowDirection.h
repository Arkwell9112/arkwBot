#ifndef TREASUREHUNTSTEPFOLLOWDIRECTION
#define TREASUREHUNTSTEPFOLLOWDIRECTION

#include "../IO/ICustomDataInput.h"
#include "TreasureHuntStep.h"

class TreasureHuntStepFollowDirection : public TreasureHuntStep {
public:
    unsigned int direction = 1;
    unsigned int mapCount = 0;
    unsigned int protocolId = 3613;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntStepFollowDirection(ICustomDataInput &input);

    void _directionFunc(ICustomDataInput &input);

    void _mapCountFunc(ICustomDataInput &input);
};

#endif