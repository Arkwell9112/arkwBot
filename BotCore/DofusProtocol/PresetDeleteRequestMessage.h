#ifndef PRESETDELETEREQUESTMESSAGE
#define PRESETDELETEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class PresetDeleteRequestMessage : public NetworkInterface {
public:
    int presetId = 0;
    unsigned int protocolId = 3361;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetDeleteRequestMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif