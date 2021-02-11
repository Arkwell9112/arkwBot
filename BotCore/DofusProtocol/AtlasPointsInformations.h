#ifndef ATLASPOINTSINFORMATIONS
#define ATLASPOINTSINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MapCoordinatesExtended.h"
#include "MapCoordinates.h"

class AtlasPointsInformations : public NetworkInterface {
public:
    unsigned int type = 0;
    std::vector<MapCoordinatesExtended> coords;
    unsigned int protocolId = 614;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AtlasPointsInformations(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _coordsFunc(ICustomDataInput &input);
};

#endif