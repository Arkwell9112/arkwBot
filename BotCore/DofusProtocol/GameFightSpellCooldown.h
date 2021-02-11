#ifndef GAMEFIGHTSPELLCOOLDOWN
#define GAMEFIGHTSPELLCOOLDOWN

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightSpellCooldown : public NetworkInterface {
public:
    int spellId = 0;
    unsigned int cooldown = 0;
    unsigned int protocolId = 5155;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightSpellCooldown(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _cooldownFunc(ICustomDataInput &input);
};

#endif