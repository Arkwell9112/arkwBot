#ifndef PRISMSETTINGSERRORMESSAGE
#define PRISMSETTINGSERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismSettingsErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6261;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismSettingsErrorMessage(ICustomDataInput &input);
};

#endif