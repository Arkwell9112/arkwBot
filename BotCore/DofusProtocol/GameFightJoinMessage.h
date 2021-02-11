#ifndef GAMEFIGHTJOINMESSAGE
#define GAMEFIGHTJOINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightJoinMessage : public NetworkInterface {
public:
    bool isTeamPhase = false;
    bool canBeCancelled = false;
    bool canSayReady = false;
    bool isFightStarted = false;
    unsigned int timeMaxBeforeFightStart = 0;
    unsigned int fightType = 0;
    unsigned int protocolId = 6888;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightJoinMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _timeMaxBeforeFightStartFunc(ICustomDataInput &input);

    void _fightTypeFunc(ICustomDataInput &input);
};

#endif