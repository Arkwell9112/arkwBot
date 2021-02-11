#ifndef ICONNAMEDPRESETSAVEREQUESTMESSAGE
#define ICONNAMEDPRESETSAVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "Preset.h"
#include "IconNamedPreset.h"
#include "IconPresetSaveRequestMessage.h"

class IconNamedPresetSaveRequestMessage : public IconPresetSaveRequestMessage {
public:
    std::string name;
    unsigned int type = 0;
    unsigned int protocolId = 7571;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IconNamedPresetSaveRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif