#ifndef PRESETSAVEERRORMESSAGE
#define PRESETSAVEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class PresetSaveErrorMessage : public NetworkInterface {
public:
    int presetId = 0;
    unsigned int code = 2;
    unsigned int protocolId = 9673;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetSaveErrorMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);
};

#endif