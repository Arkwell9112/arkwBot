#ifndef LIFEPOINTSREGENENDMESSAGE
#define LIFEPOINTSREGENENDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "UpdateLifePointsMessage.h"

class LifePointsRegenEndMessage : public UpdateLifePointsMessage {
public:
    unsigned int lifePointsGained = 0;
    unsigned int protocolId = 669;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LifePointsRegenEndMessage(ICustomDataInput &input);

    void _lifePointsGainedFunc(ICustomDataInput &input);
};

#endif