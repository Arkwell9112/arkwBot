#ifndef FORGETTABLESPELLITEM
#define FORGETTABLESPELLITEM

#include "../IO/ICustomDataInput.h"
#include "SpellItem.h"
#include "Item.h"

class ForgettableSpellItem : public SpellItem {
public:
    bool available = false;
    unsigned int protocolId = 9960;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ForgettableSpellItem(ICustomDataInput &input);

    void _availableFunc(ICustomDataInput &input);
};

#endif