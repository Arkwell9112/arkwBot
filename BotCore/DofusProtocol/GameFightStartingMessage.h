#ifndef GAMEFIGHTSTARTINGMESSAGE
#define GAMEFIGHTSTARTINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightStartingMessage : public NetworkInterface {
public:
    unsigned int fightType = 0;
    unsigned int fightId = 0;
    double attackerId = 0;
    double defenderId = 0;
    bool containsBoss = false;
    unsigned int protocolId = 4119;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightStartingMessage(ICustomDataInput &input);

    void _fightTypeFunc(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _attackerIdFunc(ICustomDataInput &input);

    void _defenderIdFunc(ICustomDataInput &input);

    void _containsBossFunc(ICustomDataInput &input);
};

#endif