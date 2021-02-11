#ifndef BREACHREWARDBOUGHTMESSAGE
#define BREACHREWARDBOUGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "BreachReward.h"

class BreachRewardBoughtMessage : public NetworkInterface {
public:
    unsigned int id = 0;
    bool bought = false;
    unsigned int protocolId = 3338;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachRewardBoughtMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _boughtFunc(ICustomDataInput &input);
};

#endif