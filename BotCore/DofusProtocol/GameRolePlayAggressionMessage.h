#ifndef GAMEROLEPLAYAGGRESSIONMESSAGE
#define GAMEROLEPLAYAGGRESSIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayAggressionMessage : public NetworkInterface {
public:
    double attackerId = 0;
    double defenderId = 0;
    unsigned int protocolId = 4864;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayAggressionMessage(ICustomDataInput &input);

    void _attackerIdFunc(ICustomDataInput &input);

    void _defenderIdFunc(ICustomDataInput &input);
};

#endif