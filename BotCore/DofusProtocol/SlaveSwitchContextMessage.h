#ifndef SLAVESWITCHCONTEXTMESSAGE
#define SLAVESWITCHCONTEXTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "SpellItem.h"
#include "Item.h"
#include "CharacterCharacteristicsInformations.h"
#include "Shortcut.h"

class SlaveSwitchContextMessage : public NetworkInterface {
public:
    double masterId = 0;
    double slaveId = 0;
    std::vector<SpellItem> slaveSpells;
    CharacterCharacteristicsInformations slaveStats;
    std::vector<Shortcut> shortcuts;
    unsigned int protocolId = 3689;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SlaveSwitchContextMessage(ICustomDataInput &input);

    void _masterIdFunc(ICustomDataInput &input);

    void _slaveIdFunc(ICustomDataInput &input);

    void _slaveSpellsFunc(ICustomDataInput &input);

    void _shortcutsFunc(ICustomDataInput &input);
};

#endif