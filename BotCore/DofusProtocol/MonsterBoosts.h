#ifndef MONSTERBOOSTS
#define MONSTERBOOSTS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MonsterBoosts : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int xpBoost = 0;
    unsigned int dropBoost = 0;
    unsigned int protocolId = 1524;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MonsterBoosts(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _xpBoostFunc(ICustomDataInput &input);

    void _dropBoostFunc(ICustomDataInput &input);
};

#endif