#ifndef GAMEROLEPLAYMONSTERNOTANGRYATPLAYERMESSAGE
#define GAMEROLEPLAYMONSTERNOTANGRYATPLAYERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayMonsterNotAngryAtPlayerMessage : public NetworkInterface {
public:
    double playerId = 0;
    double monsterGroupId = 0;
    unsigned int protocolId = 9836;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayMonsterNotAngryAtPlayerMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _monsterGroupIdFunc(ICustomDataInput &input);
};

#endif