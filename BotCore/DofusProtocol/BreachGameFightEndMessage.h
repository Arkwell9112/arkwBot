#ifndef BREACHGAMEFIGHTENDMESSAGE
#define BREACHGAMEFIGHTENDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameFightEndMessage.h"

class BreachGameFightEndMessage : public GameFightEndMessage {
public:
    int budget = 0;
    unsigned int protocolId = 5512;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachGameFightEndMessage(ICustomDataInput &input);

    void _budgetFunc(ICustomDataInput &input);
};

#endif