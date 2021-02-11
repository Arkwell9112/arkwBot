#ifndef GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWERMESSAGE
#define GAMEROLEPLAYPLAYERFIGHTFRIENDLYANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayPlayerFightFriendlyAnswerMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    bool accept = false;
    unsigned int protocolId = 9249;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayPlayerFightFriendlyAnswerMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif