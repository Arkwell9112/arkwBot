#ifndef MAPCOORDINATESANDID
#define MAPCOORDINATESANDID

#include "../IO/ICustomDataInput.h"
#include "MapCoordinates.h"

class MapCoordinatesAndId : public MapCoordinates {
public:
    double mapId = 0;
    unsigned int protocolId = 3427;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapCoordinatesAndId(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif