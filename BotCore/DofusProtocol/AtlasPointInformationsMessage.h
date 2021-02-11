#ifndef ATLASPOINTINFORMATIONSMESSAGE
#define ATLASPOINTINFORMATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AtlasPointsInformations.h"

class AtlasPointInformationsMessage : public NetworkInterface {
public:
    AtlasPointsInformations type;
    unsigned int protocolId = 4680;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AtlasPointInformationsMessage(ICustomDataInput &input);
};

#endif