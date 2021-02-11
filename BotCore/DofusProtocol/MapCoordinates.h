#ifndef MAPCOORDINATES
#define MAPCOORDINATES

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapCoordinates : public NetworkInterface {
public:
    int worldX = 0;
    int worldY = 0;
    unsigned int protocolId = 5486;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapCoordinates(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);
};

#endif