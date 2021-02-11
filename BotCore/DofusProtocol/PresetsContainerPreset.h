#ifndef PRESETSCONTAINERPRESET
#define PRESETSCONTAINERPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "Preset.h"

class PresetsContainerPreset : public Preset {
public:
    std::vector<Preset> presets;
    unsigned int protocolId = 9903;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetsContainerPreset(ICustomDataInput &input);

    void _presetsFunc(ICustomDataInput &input);
};

#endif