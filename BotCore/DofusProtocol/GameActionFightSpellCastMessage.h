#ifndef GAMEACTIONFIGHTSPELLCASTMESSAGE
#define GAMEACTIONFIGHTSPELLCASTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "AbstractGameActionFightTargetedAbilityMessage.h"

class GameActionFightSpellCastMessage : public AbstractGameActionFightTargetedAbilityMessage {
public:
    unsigned int spellId = 0;
    int spellLevel = 0;
    std::vector<int> portalsIds;
    unsigned int protocolId = 1240;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightSpellCastMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _spellLevelFunc(ICustomDataInput &input);

    void _portalsIdsFunc(ICustomDataInput &input);
};

#endif