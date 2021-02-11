#ifndef SPELLITEM
#define SPELLITEM

#include "../IO/ICustomDataInput.h"
#include "Item.h"

class SpellItem : public Item {
public:
    int spellId = 0;
    int spellLevel = 0;
    unsigned int protocolId = 7456;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpellItem(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _spellLevelFunc(ICustomDataInput &input);
};

#endif