#ifndef PORTALUSEREQUESTMESSAGE
#define PORTALUSEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PortalUseRequestMessage : public NetworkInterface {
public:
    unsigned int portalId = 0;
    unsigned int protocolId = 3973;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PortalUseRequestMessage(ICustomDataInput &input);

    void _portalIdFunc(ICustomDataInput &input);
};

#endif