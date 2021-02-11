#ifndef PRISMSETTINGSREQUESTMESSAGE
#define PRISMSETTINGSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismSettingsRequestMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int startDefenseTime = 0;
    unsigned int protocolId = 9213;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismSettingsRequestMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _startDefenseTimeFunc(ICustomDataInput &input);
};

#endif