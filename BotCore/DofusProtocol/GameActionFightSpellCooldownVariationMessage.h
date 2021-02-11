#ifndef GAMEACTIONFIGHTSPELLCOOLDOWNVARIATIONMESSAGE
#define GAMEACTIONFIGHTSPELLCOOLDOWNVARIATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightSpellCooldownVariationMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int spellId = 0;
    int value = 0;
    unsigned int protocolId = 5311;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightSpellCooldownVariationMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif