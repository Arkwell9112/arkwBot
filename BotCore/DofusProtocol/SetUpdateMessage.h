#ifndef SETUPDATEMESSAGE
#define SETUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectEffect.h"

class SetUpdateMessage : public NetworkInterface {
public:
    unsigned int setId = 0;
    std::vector<unsigned int> setObjects;
    std::vector<ObjectEffect> setEffects;
    unsigned int protocolId = 3763;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SetUpdateMessage(ICustomDataInput &input);

    void _setIdFunc(ICustomDataInput &input);

    void _setObjectsFunc(ICustomDataInput &input);

    void _setEffectsFunc(ICustomDataInput &input);
};

#endif