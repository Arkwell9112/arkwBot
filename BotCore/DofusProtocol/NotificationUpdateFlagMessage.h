#ifndef NOTIFICATIONUPDATEFLAGMESSAGE
#define NOTIFICATIONUPDATEFLAGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NotificationUpdateFlagMessage : public NetworkInterface {
public:
    unsigned int index = 0;
    unsigned int protocolId = 78;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NotificationUpdateFlagMessage(ICustomDataInput &input);

    void _indexFunc(ICustomDataInput &input);
};

#endif