#ifndef ITEMFORPRESETUPDATEMESSAGE
#define ITEMFORPRESETUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"
#include "Preset.h"
#include "ItemForPreset.h"

class ItemForPresetUpdateMessage : public NetworkInterface {
public:
    int presetId = 0;
    ItemForPreset presetItem;
    unsigned int protocolId = 3915;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ItemForPresetUpdateMessage(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif