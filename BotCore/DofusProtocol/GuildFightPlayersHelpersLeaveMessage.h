#ifndef GUILDFIGHTPLAYERSHELPERSLEAVEMESSAGE
#define GUILDFIGHTPLAYERSHELPERSLEAVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildFightPlayersHelpersLeaveMessage : public NetworkInterface {
public:
    double fightId = 0;
    double playerId = 0;
    unsigned int protocolId = 6370;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightPlayersHelpersLeaveMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif