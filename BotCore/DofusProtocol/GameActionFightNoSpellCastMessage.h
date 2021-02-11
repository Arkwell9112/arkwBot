#ifndef GAMEACTIONFIGHTNOSPELLCASTMESSAGE
#define GAMEACTIONFIGHTNOSPELLCASTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameActionFightNoSpellCastMessage : public NetworkInterface {
public:
    unsigned int spellLevelId = 0;
    unsigned int protocolId = 7718;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightNoSpellCastMessage(ICustomDataInput &input);

    void _spellLevelIdFunc(ICustomDataInput &input);
};

#endif