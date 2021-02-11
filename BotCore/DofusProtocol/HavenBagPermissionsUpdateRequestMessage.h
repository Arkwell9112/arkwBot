#ifndef HAVENBAGPERMISSIONSUPDATEREQUESTMESSAGE
#define HAVENBAGPERMISSIONSUPDATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HavenBagPermissionsUpdateRequestMessage : public NetworkInterface {
public:
    unsigned int permissions = 0;
    unsigned int protocolId = 6677;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagPermissionsUpdateRequestMessage(ICustomDataInput &input);

    void _permissionsFunc(ICustomDataInput &input);
};

#endif