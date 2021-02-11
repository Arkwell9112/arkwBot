#ifndef SPELLSPRESET
#define SPELLSPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "SpellForPreset.h"
#include "Preset.h"

class SpellsPreset : public Preset {
public:
    std::vector<SpellForPreset> spells;
    unsigned int protocolId = 2124;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpellsPreset(ICustomDataInput &input);

    void _spellsFunc(ICustomDataInput &input);
};

#endif