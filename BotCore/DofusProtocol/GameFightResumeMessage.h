#ifndef GAMEFIGHTRESUMEMESSAGE
#define GAMEFIGHTRESUMEMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GameFightSpellCooldown.h"
#include "GameFightSpectateMessage.h"

class GameFightResumeMessage : public GameFightSpectateMessage {
public:
    std::vector<GameFightSpellCooldown> spellCooldowns;
    unsigned int summonCount = 0;
    unsigned int bombCount = 0;
    unsigned int protocolId = 9823;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightResumeMessage(ICustomDataInput &input);

    void _spellCooldownsFunc(ICustomDataInput &input);

    void _summonCountFunc(ICustomDataInput &input);

    void _bombCountFunc(ICustomDataInput &input);
};

#endif