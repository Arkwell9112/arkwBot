#ifndef COMPASSUPDATEMESSAGE
#define COMPASSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "MapCoordinates.h"

class CompassUpdateMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    MapCoordinates coords;
    unsigned int protocolId = 916;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CompassUpdateMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif