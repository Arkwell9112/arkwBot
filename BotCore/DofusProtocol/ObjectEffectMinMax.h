#ifndef OBJECTEFFECTMINMAX
#define OBJECTEFFECTMINMAX

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"

class ObjectEffectMinMax : public ObjectEffect {
public:
    unsigned int min = 0;
    unsigned int max = 0;
    unsigned int protocolId = 5036;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectMinMax(ICustomDataInput &input);

    void _minFunc(ICustomDataInput &input);

    void _maxFunc(ICustomDataInput &input);
};

#endif