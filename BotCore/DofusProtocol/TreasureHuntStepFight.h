#ifndef TREASUREHUNTSTEPFIGHT
#define TREASUREHUNTSTEPFIGHT

#include "../IO/ICustomDataInput.h"
#include "TreasureHuntStep.h"

class TreasureHuntStepFight : public TreasureHuntStep {
public:
    unsigned int protocolId = 7770;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntStepFight(ICustomDataInput &input);
};

#endif