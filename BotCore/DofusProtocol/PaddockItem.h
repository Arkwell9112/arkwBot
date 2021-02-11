#ifndef PADDOCKITEM
#define PADDOCKITEM

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ObjectItemInRolePlay.h"
#include "ItemDurability.h"

class PaddockItem : public ObjectItemInRolePlay {
public:
    ItemDurability durability;
    unsigned int protocolId = 7608;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockItem(ICustomDataInput &input);
};

#endif