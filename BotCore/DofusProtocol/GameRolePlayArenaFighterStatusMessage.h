#ifndef GAMEROLEPLAYARENAFIGHTERSTATUSMESSAGE
#define GAMEROLEPLAYARENAFIGHTERSTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayArenaFighterStatusMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    double playerId = 0;
    bool accepted = false;
    unsigned int protocolId = 6574;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaFighterStatusMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _acceptedFunc(ICustomDataInput &input);
};

#endif