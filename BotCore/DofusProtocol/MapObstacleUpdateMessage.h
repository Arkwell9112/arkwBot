#ifndef MAPOBSTACLEUPDATEMESSAGE
#define MAPOBSTACLEUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MapObstacle.h"

class MapObstacleUpdateMessage : public NetworkInterface {
public:
    std::vector<MapObstacle> obstacles;
    unsigned int protocolId = 2001;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapObstacleUpdateMessage(ICustomDataInput &input);

    void _obstaclesFunc(ICustomDataInput &input);
};

#endif