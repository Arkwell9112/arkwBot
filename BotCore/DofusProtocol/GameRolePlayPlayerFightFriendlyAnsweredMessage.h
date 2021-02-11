#ifndef GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWEREDMESSAGE
#define GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWEREDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayPlayerFightFriendlyAnsweredMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    double sourceId = 0;
    double targetId = 0;
    bool accept = false;
    unsigned int protocolId = 5029;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPlayerFightFriendlyAnsweredMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _sourceIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif