#ifndef GAMEROLEPLAYREMOVECHALLENGEMESSAGE
#define GAMEROLEPLAYREMOVECHALLENGEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayRemoveChallengeMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    unsigned int protocolId = 4579;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayRemoveChallengeMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif