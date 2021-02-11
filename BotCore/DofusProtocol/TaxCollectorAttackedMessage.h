#ifndef TAXCOLLECTORATTACKEDMESSAGE
#define TAXCOLLECTORATTACKEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"

class TaxCollectorAttackedMessage : public NetworkInterface {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    BasicGuildInformations guild;
    unsigned int protocolId = 3088;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorAttackedMessage(ICustomDataInput &input);

    void _firstNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif