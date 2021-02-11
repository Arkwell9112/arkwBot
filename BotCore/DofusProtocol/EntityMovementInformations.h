#ifndef ENTITYMOVEMENTINFORMATIONS
#define ENTITYMOVEMENTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class EntityMovementInformations : public NetworkInterface {
public:
    int id = 0;
    std::vector<int> steps;
    unsigned int protocolId = 8112;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntityMovementInformations(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _stepsFunc(ICustomDataInput &input);
};

#endif