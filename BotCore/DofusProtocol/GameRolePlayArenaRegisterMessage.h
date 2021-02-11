#ifndef GAMEROLEPLAYARENAREGISTERMESSAGE
#define GAMEROLEPLAYARENAREGISTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayArenaRegisterMessage : public NetworkInterface {
public:
    unsigned int battleMode = 3;
    unsigned int protocolId = 532;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaRegisterMessage(ICustomDataInput &input);

    void _battleModeFunc(ICustomDataInput &input);
};

#endif