#ifndef TREASUREHUNTSTEPDIG
#define TREASUREHUNTSTEPDIG

#include "../IO/ICustomDataInput.h"
#include "TreasureHuntStep.h"

class TreasureHuntStepDig : public TreasureHuntStep {
public:
    unsigned int protocolId = 5817;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntStepDig(ICustomDataInput &input);
};

#endif