#ifndef NOTIFICATIONRESETMESSAGE
#define NOTIFICATIONRESETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NotificationResetMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1029;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NotificationResetMessage(ICustomDataInput &input);
};

#endif