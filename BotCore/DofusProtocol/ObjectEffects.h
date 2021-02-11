#ifndef OBJECTEFFECTS
#define OBJECTEFFECTS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectEffect.h"

class ObjectEffects : public NetworkInterface {
public:
    std::vector<ObjectEffect> effects;
    unsigned int protocolId = 7934;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffects(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);
};

#endif