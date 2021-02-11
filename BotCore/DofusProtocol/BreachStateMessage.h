#ifndef BREACHSTATEMESSAGE
#define BREACHSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"
#include "CharacterMinimalInformations.h"

class BreachStateMessage : public NetworkInterface {
public:
    CharacterMinimalInformations owner;
    std::vector<ObjectEffectInteger> bonuses;
    unsigned int bugdet = 0;
    bool saved = false;
    unsigned int protocolId = 5332;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachStateMessage(ICustomDataInput &input);

    void _bonusesFunc(ICustomDataInput &input);

    void _bugdetFunc(ICustomDataInput &input);

    void _savedFunc(ICustomDataInput &input);
};

#endif