#ifndef MAPCOMPLEMENTARYINFORMATIONSANOMALYMESSAGE
#define MAPCOMPLEMENTARYINFORMATIONSANOMALYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "MapComplementaryInformationsDataMessage.h"

class MapComplementaryInformationsAnomalyMessage : public MapComplementaryInformationsDataMessage {
public:
    unsigned int level = 0;
    double closingTime = 0;
    unsigned int protocolId = 9929;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapComplementaryInformationsAnomalyMessage(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _closingTimeFunc(ICustomDataInput &input);
};

#endif