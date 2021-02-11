#ifndef SPELLFORPRESET
#define SPELLFORPRESET

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Preset.h"

class SpellForPreset : public NetworkInterface {
public:
    unsigned int spellId = 0;
    std::vector<int> shortcuts;
    unsigned int protocolId = 2897;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpellForPreset(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _shortcutsFunc(ICustomDataInput &input);
};

#endif