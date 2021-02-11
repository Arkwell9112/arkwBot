#ifndef TREASUREHUNTSTEPFOLLOWDIRECTIONTOHINT
#define TREASUREHUNTSTEPFOLLOWDIRECTIONTOHINT

#include "../IO/ICustomDataInput.h"
#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"

class TreasureHuntStepFollowDirectionToHint : public TreasureHuntStep {
public:
    unsigned int direction = 1;
    unsigned int npcId = 0;
    unsigned int protocolId = 9917;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntStepFollowDirectionToHint(ICustomDataInput &input);

    void _directionFunc(ICustomDataInput &input);

    void _npcIdFunc(ICustomDataInput &input);
};

#endif