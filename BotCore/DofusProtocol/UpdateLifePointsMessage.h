#ifndef UPDATELIFEPOINTSMESSAGE
#define UPDATELIFEPOINTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class UpdateLifePointsMessage : public NetworkInterface {
public:
    unsigned int lifePoints = 0;
    unsigned int maxLifePoints = 0;
    unsigned int protocolId = 3681;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_UpdateLifePointsMessage(ICustomDataInput &input);

    void _lifePointsFunc(ICustomDataInput &input);

    void _maxLifePointsFunc(ICustomDataInput &input);
};

#endif