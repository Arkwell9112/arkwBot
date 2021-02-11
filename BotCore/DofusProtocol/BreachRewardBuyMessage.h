#ifndef BREACHREWARDBUYMESSAGE
#define BREACHREWARDBUYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "BreachReward.h"

class BreachRewardBuyMessage : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int protocolId = 5548;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachRewardBuyMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif