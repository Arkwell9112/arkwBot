#ifndef TELEPORTDESTINATION
#define TELEPORTDESTINATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportDestination : public NetworkInterface {
public:
    unsigned int type = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    unsigned int level = 0;
    unsigned int cost = 0;
    unsigned int protocolId = 3804;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportDestination(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _costFunc(ICustomDataInput &input);
};

#endif