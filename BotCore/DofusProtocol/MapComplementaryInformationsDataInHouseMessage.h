#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAINHOUSEMESSAGE
#define MAPCOMPLEMENTARYINFORMATIONSDATAINHOUSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "MapComplementaryInformationsDataMessage.h"
#include "HouseInformationsInside.h"
#include "HouseInformations.h"

class MapComplementaryInformationsDataInHouseMessage : public MapComplementaryInformationsDataMessage {
public:
    HouseInformationsInside currentHouse;
    unsigned int protocolId = 3505;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapComplementaryInformationsDataInHouseMessage(ICustomDataInput &input);
};

#endif