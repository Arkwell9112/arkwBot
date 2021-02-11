#ifndef GUILDFIGHTPLAYERSENEMYREMOVEMESSAGE
#define GUILDFIGHTPLAYERSENEMYREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildFightPlayersEnemyRemoveMessage : public NetworkInterface {
public:
    double fightId = 0;
    double playerId = 0;
    unsigned int protocolId = 9763;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightPlayersEnemyRemoveMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif