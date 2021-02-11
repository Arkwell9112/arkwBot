#ifndef SHORTCUTOBJECTITEM
#define SHORTCUTOBJECTITEM

#include "../IO/ICustomDataInput.h"
#include "ObjectItem.h"
#include "Item.h"
#include "ShortcutObject.h"
#include "Shortcut.h"

class ShortcutObjectItem : public ShortcutObject {
public:
    int itemUID = 0;
    int itemGID = 0;
    unsigned int protocolId = 4505;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutObjectItem(ICustomDataInput &input);

    void _itemUIDFunc(ICustomDataInput &input);

    void _itemGIDFunc(ICustomDataInput &input);
};

#endif