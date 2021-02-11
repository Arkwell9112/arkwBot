#ifndef BREACHBONUSMESSAGE
#define BREACHBONUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"

class BreachBonusMessage : public NetworkInterface {
public:
    ObjectEffectInteger bonus;
    unsigned int protocolId = 5770;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachBonusMessage(ICustomDataInput &input);
};

#endif