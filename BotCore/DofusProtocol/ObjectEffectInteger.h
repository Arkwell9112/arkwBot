#ifndef OBJECTEFFECTINTEGER
#define OBJECTEFFECTINTEGER

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"

class ObjectEffectInteger : public ObjectEffect {
public:
    unsigned int value = 0;
    unsigned int protocolId = 5843;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectInteger(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif