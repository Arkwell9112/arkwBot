#ifndef GAMEFIGHTRESUMESLAVEINFO
#define GAMEFIGHTRESUMESLAVEINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameFightSpellCooldown.h"

class GameFightResumeSlaveInfo : public NetworkInterface {
public:
    double slaveId = 0;
    std::vector<GameFightSpellCooldown> spellCooldowns;
    unsigned int summonCount = 0;
    unsigned int bombCount = 0;
    unsigned int protocolId = 6229;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightResumeSlaveInfo(ICustomDataInput &input);

    void _slaveIdFunc(ICustomDataInput &input);

    void _spellCooldownsFunc(ICustomDataInput &input);

    void _summonCountFunc(ICustomDataInput &input);

    void _bombCountFunc(ICustomDataInput &input);
};

#endif