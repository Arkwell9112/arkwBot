#ifndef FIGHTLOOT
#define FIGHTLOOT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class FightLoot : public NetworkInterface {
public:
    std::vector<unsigned int> objects;
    double kamas = 0;
    unsigned int protocolId = 3121;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightLoot(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);
};

#endif