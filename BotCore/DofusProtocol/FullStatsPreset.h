#ifndef FULLSTATSPRESET
#define FULLSTATSPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "StatsPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"

class FullStatsPreset : public Preset {
public:
    std::vector<CharacterCharacteristicForPreset> stats;
    unsigned int protocolId = 2296;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FullStatsPreset(ICustomDataInput &input);

    void _statsFunc(ICustomDataInput &input);
};

#endif