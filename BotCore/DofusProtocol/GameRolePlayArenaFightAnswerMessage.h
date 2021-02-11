#ifndef GAMEROLEPLAYARENAFIGHTANSWERMESSAGE
#define GAMEROLEPLAYARENAFIGHTANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayArenaFightAnswerMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    bool accept = false;
    unsigned int protocolId = 2304;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaFightAnswerMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif