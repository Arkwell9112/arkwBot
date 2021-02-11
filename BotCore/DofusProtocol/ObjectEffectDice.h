#ifndef OBJECTEFFECTDICE
#define OBJECTEFFECTDICE

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"

class ObjectEffectDice : public ObjectEffect {
public:
    unsigned int diceNum = 0;
    unsigned int diceSide = 0;
    unsigned int diceConst = 0;
    unsigned int protocolId = 1846;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectDice(ICustomDataInput &input);

    void _diceNumFunc(ICustomDataInput &input);

    void _diceSideFunc(ICustomDataInput &input);

    void _diceConstFunc(ICustomDataInput &input);
};

#endif