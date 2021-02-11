#ifndef GAMEROLEPLAYPLAYERFIGHTFRIENDLYREQUESTEDMESSAGE
#define GAMEROLEPLAYPLAYERFIGHTFRIENDLYREQUESTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayPlayerFightFriendlyRequestedMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    double sourceId = 0;
    double targetId = 0;
    unsigned int protocolId = 2821;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPlayerFightFriendlyRequestedMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _sourceIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif