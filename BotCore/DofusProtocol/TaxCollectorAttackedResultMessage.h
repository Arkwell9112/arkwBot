#ifndef TAXCOLLECTORATTACKEDRESULTMESSAGE
#define TAXCOLLECTORATTACKEDRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TaxCollectorBasicInformations.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"

class TaxCollectorAttackedResultMessage : public NetworkInterface {
public:
    bool deadOrAlive = false;
    TaxCollectorBasicInformations basicInfos;
    BasicGuildInformations guild;
    unsigned int protocolId = 4944;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorAttackedResultMessage(ICustomDataInput &input);

    void _deadOrAliveFunc(ICustomDataInput &input);
};

#endif