#ifndef GAMEACTIONFIGHTDISPELLSPELLMESSAGE
#define GAMEACTIONFIGHTDISPELLSPELLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameActionFightDispellMessage.h"

class GameActionFightDispellSpellMessage : public GameActionFightDispellMessage {
public:
    unsigned int spellId = 0;
    unsigned int protocolId = 6668;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDispellSpellMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);
};

#endif