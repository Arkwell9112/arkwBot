#ifndef ICONPRESETSAVEREQUESTMESSAGE
#define ICONPRESETSAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Preset.h"

class IconPresetSaveRequestMessage : public NetworkInterface {
public:
    int presetId = 0;
    unsigned int symbolId = 0;
    bool updateData = false;
    unsigned int protocolId = 623;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IconPresetSaveRequestMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);

    void _symbolIdFunc(ICustomDataInput &input);

    void _updateDataFunc(ICustomDataInput &input);
};

#endif