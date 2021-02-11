#ifndef PLAYERSTATUSUPDATEMESSAGE
#define PLAYERSTATUSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PlayerStatus.h"

class PlayerStatusUpdateMessage : public NetworkInterface {
public:
    unsigned int accountId = 0;
    double playerId = 0;
    PlayerStatus status;
    unsigned int protocolId = 6917;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PlayerStatusUpdateMessage(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif