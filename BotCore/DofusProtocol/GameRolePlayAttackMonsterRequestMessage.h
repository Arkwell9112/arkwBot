#ifndef GAMEROLEPLAYATTACKMONSTERREQUESTMESSAGE
#define GAMEROLEPLAYATTACKMONSTERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayAttackMonsterRequestMessage : public NetworkInterface {
public:
    double monsterGroupId = 0;
    unsigned int protocolId = 8218;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayAttackMonsterRequestMessage(ICustomDataInput &input);

    void _monsterGroupIdFunc(ICustomDataInput &input);
};

#endif