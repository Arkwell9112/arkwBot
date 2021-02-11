#ifndef MAPCOMPLEMENTARYINFORMATIONSBREACHMESSAGE
#define MAPCOMPLEMENTARYINFORMATIONSBREACHMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "BreachBranch.h"
#include "MapComplementaryInformationsDataMessage.h"

class MapComplementaryInformationsBreachMessage : public MapComplementaryInformationsDataMessage {
public:
    unsigned int floor = 0;
    unsigned int room = 0;
    unsigned int infinityMode = 0;
    std::vector<BreachBranch> branches;
    unsigned int protocolId = 4846;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapComplementaryInformationsBreachMessage(ICustomDataInput &input);

    void _floorFunc(ICustomDataInput &input);

    void _roomFunc(ICustomDataInput &input);

    void _infinityModeFunc(ICustomDataInput &input);

    void _branchesFunc(ICustomDataInput &input);
};

#endif