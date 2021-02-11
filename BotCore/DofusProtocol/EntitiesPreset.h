#ifndef ENTITIESPRESET
#define ENTITIESPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "Preset.h"

class EntitiesPreset : public Preset {
public:
    unsigned int iconId = 0;
    std::vector<unsigned int> entityIds;
    unsigned int protocolId = 527;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntitiesPreset(ICustomDataInput &input);

    void _iconIdFunc(ICustomDataInput &input);

    void _entityIdsFunc(ICustomDataInput &input);
};

#endif