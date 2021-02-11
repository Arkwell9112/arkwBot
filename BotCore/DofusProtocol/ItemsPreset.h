#ifndef ITEMSPRESET
#define ITEMSPRESET

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "Item.h"
#include "Preset.h"
#include "ItemForPreset.h"
#include "EntityLook.h"

class ItemsPreset : public Preset {
public:
    std::vector<ItemForPreset> items;
    bool mountEquipped = false;
    EntityLook look;
    unsigned int protocolId = 2193;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ItemsPreset(ICustomDataInput &input);

    void _itemsFunc(ICustomDataInput &input);

    void _mountEquippedFunc(ICustomDataInput &input);
};

#endif