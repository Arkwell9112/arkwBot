#ifndef GAMEROLEPLAYMONSTERANGRYATPLAYERMESSAGE
#define GAMEROLEPLAYMONSTERANGRYATPLAYERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayMonsterAngryAtPlayerMessage : public NetworkInterface {
public:
    double playerId = 0;
    double monsterGroupId = 0;
    double angryStartTime = 0;
    double attackTime = 0;
    unsigned int protocolId = 4748;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayMonsterAngryAtPlayerMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _monsterGroupIdFunc(ICustomDataInput &input);

    void _angryStartTimeFunc(ICustomDataInput &input);

    void _attackTimeFunc(ICustomDataInput &input);
};

#endif