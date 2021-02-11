#ifndef PRESETSAVEDMESSAGE
#define PRESETSAVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class PresetSavedMessage : public NetworkInterface {
public:
    int presetId = 0;
    Preset preset;
    unsigned int protocolId = 5244;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetSavedMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif