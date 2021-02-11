#ifndef NOTIFICATIONLISTMESSAGE
#define NOTIFICATIONLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class NotificationListMessage : public NetworkInterface {
public:
    std::vector<int> flags;
    unsigned int protocolId = 1082;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NotificationListMessage(ICustomDataInput &input);

    void _flagsFunc(ICustomDataInput &input);
};

#endif