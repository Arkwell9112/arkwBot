#ifndef SPELLLISTMESSAGE
#define SPELLLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "SpellItem.h"
#include "Item.h"

class SpellListMessage : public NetworkInterface {
public:
    bool spellPrevisualization = false;
    std::vector<SpellItem> spells;
    unsigned int protocolId = 5227;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpellListMessage(ICustomDataInput &input);

    void _spellPrevisualizationFunc(ICustomDataInput &input);

    void _spellsFunc(ICustomDataInput &input);
};

#endif