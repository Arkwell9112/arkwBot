#ifndef PRESETSMESSAGE
#define PRESETSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Preset.h"

class PresetsMessage : public NetworkInterface {
public:
    std::vector<Preset> presets;
    unsigned int protocolId = 5627;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetsMessage(ICustomDataInput &input);

    void _presetsFunc(ICustomDataInput &input);
};

#endif