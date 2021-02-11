#ifndef MAPCOORDINATESEXTENDED
#define MAPCOORDINATESEXTENDED

#include "../IO/ICustomDataInput.h"
#include "MapCoordinatesAndId.h"
#include "MapCoordinates.h"

class MapCoordinatesExtended : public MapCoordinatesAndId {
public:
    unsigned int subAreaId = 0;
    unsigned int protocolId = 8214;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapCoordinatesExtended(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif