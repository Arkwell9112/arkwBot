#ifndef ICONNAMEDPRESET
#define ICONNAMEDPRESET

#include "../IO/ICustomDataInput.h"
#include <string>
#include "PresetsContainerPreset.h"
#include "Preset.h"

class IconNamedPreset : public PresetsContainerPreset {
public:
    unsigned int iconId = 0;
    std::string name;
    unsigned int protocolId = 7815;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IconNamedPreset(ICustomDataInput &input);

    void _iconIdFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif