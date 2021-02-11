#ifndef TAXCOLLECTORSTATICINFORMATIONS
#define TAXCOLLECTORSTATICINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"

class TaxCollectorStaticInformations : public NetworkInterface {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    GuildInformations guildIdentity;
    double callerId = 0;
    unsigned int protocolId = 3115;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorStaticInformations(ICustomDataInput &input);

    void _firstNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);

    void _callerIdFunc(ICustomDataInput &input);
};

#endif