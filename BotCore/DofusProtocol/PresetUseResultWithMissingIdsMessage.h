#ifndef PRESETUSERESULTWITHMISSINGIDSMESSAGE
#define PRESETUSERESULTWITHMISSINGIDSMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "Preset.h"
#include "PresetUseResultMessage.h"

class PresetUseResultWithMissingIdsMessage : public PresetUseResultMessage {
public:
    std::vector<unsigned int> missingIds;
    unsigned int protocolId = 5674;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetUseResultWithMissingIdsMessage(ICustomDataInput &input);

    void _missingIdsFunc(ICustomDataInput &input);
};

#endif