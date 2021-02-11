#ifndef OBJECTEFFECTSTRING
#define OBJECTEFFECTSTRING

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ObjectEffect.h"

class ObjectEffectString : public ObjectEffect {
public:
    std::string value;
    unsigned int protocolId = 7628;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectString(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif