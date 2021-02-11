#ifndef OBJECTEFFECTCREATURE
#define OBJECTEFFECTCREATURE

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"

class ObjectEffectCreature : public ObjectEffect {
public:
    unsigned int monsterFamilyId = 0;
    unsigned int protocolId = 7034;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectCreature(ICustomDataInput &input);

    void _monsterFamilyIdFunc(ICustomDataInput &input);
};

#endif