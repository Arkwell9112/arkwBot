#ifndef GAMEACTIONFIGHTSPELLIMMUNITYMESSAGE
#define GAMEACTIONFIGHTSPELLIMMUNITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightSpellImmunityMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int spellId = 0;
    unsigned int protocolId = 9372;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightSpellImmunityMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);
};

#endif