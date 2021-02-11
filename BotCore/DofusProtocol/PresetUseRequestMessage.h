#ifndef PRESETUSEREQUESTMESSAGE
#define PRESETUSEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class PresetUseRequestMessage : public NetworkInterface {
public:
    int presetId = 0;
    unsigned int protocolId = 7006;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetUseRequestMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif