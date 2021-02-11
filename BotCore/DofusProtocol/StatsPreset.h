#ifndef STATSPRESET
#define STATSPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "SimpleCharacterCharacteristicForPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"

class StatsPreset : public Preset {
public:
    std::vector<SimpleCharacterCharacteristicForPreset> stats;
    unsigned int protocolId = 3738;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatsPreset(ICustomDataInput &input);

    void _statsFunc(ICustomDataInput &input);
};

#endif