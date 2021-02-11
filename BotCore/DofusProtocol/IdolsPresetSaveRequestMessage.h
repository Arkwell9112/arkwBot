#ifndef IDOLSPRESETSAVEREQUESTMESSAGE
#define IDOLSPRESETSAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "Preset.h"
#include "IdolsPreset.h"
#include "Idol.h"
#include "IconPresetSaveRequestMessage.h"

class IdolsPresetSaveRequestMessage : public IconPresetSaveRequestMessage {
public:
    unsigned int protocolId = 7365;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolsPresetSaveRequestMessage(ICustomDataInput &input);
};

#endif