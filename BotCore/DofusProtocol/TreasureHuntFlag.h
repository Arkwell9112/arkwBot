#ifndef TREASUREHUNTFLAG
#define TREASUREHUNTFLAG

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntFlag : public NetworkInterface {
public:
    double mapId = 0;
    unsigned int state = 0;
    unsigned int protocolId = 5692;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntFlag(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);
};

#endif