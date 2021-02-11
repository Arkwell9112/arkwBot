#ifndef IDOLSPRESET
#define IDOLSPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "Preset.h"
#include "Idol.h"

class IdolsPreset : public Preset {
public:
    unsigned int iconId = 0;
    std::vector<unsigned int> idolIds;
    unsigned int protocolId = 2799;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolsPreset(ICustomDataInput &input);

    void _iconIdFunc(ICustomDataInput &input);

    void _idolIdsFunc(ICustomDataInput &input);
};

#endif