#ifndef MAPOBSTACLE
#define MAPOBSTACLE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapObstacle : public NetworkInterface {
public:
    unsigned int obstacleCellId = 0;
    unsigned int state = 0;
    unsigned int protocolId = 9729;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapObstacle(ICustomDataInput &input);

    void _obstacleCellIdFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);
};

#endif