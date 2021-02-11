#ifndef TREASUREHUNTSTEPFOLLOWDIRECTIONTOPOI
#define TREASUREHUNTSTEPFOLLOWDIRECTIONTOPOI

#include "../IO/ICustomDataInput.h"
#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"

class TreasureHuntStepFollowDirectionToPOI : public TreasureHuntStep {
public:
    unsigned int direction = 1;
    unsigned int poiLabelId = 0;
    unsigned int protocolId = 7529;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntStepFollowDirectionToPOI(ICustomDataInput &input);

    void _directionFunc(ICustomDataInput &input);

    void _poiLabelIdFunc(ICustomDataInput &input);
};

#endif