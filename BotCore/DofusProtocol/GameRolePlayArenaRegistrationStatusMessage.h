#ifndef GAMEROLEPLAYARENAREGISTRATIONSTATUSMESSAGE
#define GAMEROLEPLAYARENAREGISTRATIONSTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayArenaRegistrationStatusMessage : public NetworkInterface {
public:
    bool registered = false;
    unsigned int step = 0;
    unsigned int battleMode = 3;
    unsigned int protocolId = 7549;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaRegistrationStatusMessage(ICustomDataInput &input);

    void _registeredFunc(ICustomDataInput &input);

    void _stepFunc(ICustomDataInput &input);

    void _battleModeFunc(ICustomDataInput &input);
};

#endif