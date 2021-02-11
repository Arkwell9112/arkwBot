#ifndef MAPFIGHTSTARTPOSITIONSUPDATEMESSAGE
#define MAPFIGHTSTARTPOSITIONSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FightStartingPositions.h"

class MapFightStartPositionsUpdateMessage : public NetworkInterface {
public:
    double mapId = 0;
    FightStartingPositions fightStartPositions;
    unsigned int protocolId = 8447;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapFightStartPositionsUpdateMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif