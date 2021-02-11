#ifndef MAPCOMPLEMENTARYINFORMATIONSWITHCOORDSMESSAGE
#define MAPCOMPLEMENTARYINFORMATIONSWITHCOORDSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "MapComplementaryInformationsDataMessage.h"

class MapComplementaryInformationsWithCoordsMessage : public MapComplementaryInformationsDataMessage {
public:
    int worldX = 0;
    int worldY = 0;
    unsigned int protocolId = 8758;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapComplementaryInformationsWithCoordsMessage(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);
};

#endif