#ifndef PORTALINFORMATION
#define PORTALINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PortalInformation : public NetworkInterface {
public:
    int portalId = 0;
    int areaId = 0;
    unsigned int protocolId = 4544;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PortalInformation(ICustomDataInput &input);

    void _portalIdFunc(ICustomDataInput &input);

    void _areaIdFunc(ICustomDataInput &input);
};

#endif