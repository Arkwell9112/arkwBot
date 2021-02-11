#ifndef FORGETTABLESPELLLISTUPDATEMESSAGE
#define FORGETTABLESPELLLISTUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "SpellItem.h"
#include "Item.h"
#include "ForgettableSpellItem.h"

class ForgettableSpellListUpdateMessage : public NetworkInterface {
public:
    unsigned int action = 0;
    std::vector<ForgettableSpellItem> spells;
    unsigned int protocolId = 972;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ForgettableSpellListUpdateMessage(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);

    void _spellsFunc(ICustomDataInput &input);
};

#endif