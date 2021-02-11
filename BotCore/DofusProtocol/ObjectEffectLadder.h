#ifndef OBJECTEFFECTLADDER
#define OBJECTEFFECTLADDER

#include "../IO/ICustomDataInput.h"
#include "ObjectEffectCreature.h"
#include "ObjectEffect.h"

class ObjectEffectLadder : public ObjectEffectCreature {
public:
    unsigned int monsterCount = 0;
    unsigned int protocolId = 1548;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectLadder(ICustomDataInput &input);

    void _monsterCountFunc(ICustomDataInput &input);
};

#endif