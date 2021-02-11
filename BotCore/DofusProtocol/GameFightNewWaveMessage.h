#ifndef GAMEFIGHTNEWWAVEMESSAGE
#define GAMEFIGHTNEWWAVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightNewWaveMessage : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int teamId = 2;
    int nbTurnBeforeNextWave = 0;
    unsigned int protocolId = 3833;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightNewWaveMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _teamIdFunc(ICustomDataInput &input);

    void _nbTurnBeforeNextWaveFunc(ICustomDataInput &input);
};

#endif