#ifndef HAVENBAGPERMISSIONSUPDATEMESSAGE
#define HAVENBAGPERMISSIONSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HavenBagPermissionsUpdateMessage : public NetworkInterface {
public:
    unsigned int permissions = 0;
    unsigned int protocolId = 2326;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagPermissionsUpdateMessage(ICustomDataInput &input);

    void _permissionsFunc(ICustomDataInput &input);
};

#endif