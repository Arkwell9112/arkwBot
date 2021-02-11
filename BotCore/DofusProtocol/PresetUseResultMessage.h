#ifndef PRESETUSERESULTMESSAGE
#define PRESETUSERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class PresetUseResultMessage : public NetworkInterface {
public:
    int presetId = 0;
    unsigned int code = 3;
    unsigned int protocolId = 1970;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetUseResultMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);
};

#endif