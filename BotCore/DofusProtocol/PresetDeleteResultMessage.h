#ifndef PRESETDELETERESULTMESSAGE
#define PRESETDELETERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class PresetDeleteResultMessage : public NetworkInterface {
public:
    int presetId = 0;
    unsigned int code = 2;
    unsigned int protocolId = 4138;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PresetDeleteResultMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);
};

#endif