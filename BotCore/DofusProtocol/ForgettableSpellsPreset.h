#ifndef FORGETTABLESPELLSPRESET
#define FORGETTABLESPELLSPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "SpellsPreset.h"
#include "SpellForPreset.h"
#include "Preset.h"

class ForgettableSpellsPreset : public Preset {
public:
    SpellsPreset baseSpellsPreset;
    std::vector<SpellForPreset> forgettableSpells;
    unsigned int protocolId = 7595;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ForgettableSpellsPreset(ICustomDataInput &input);

    void _forgettableSpellsFunc(ICustomDataInput &input);
};

#endif