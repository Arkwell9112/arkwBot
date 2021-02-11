#ifndef NOTIFICATIONBYSERVERMESSAGE
#define NOTIFICATIONBYSERVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class NotificationByServerMessage : public NetworkInterface {
public:
    unsigned int id = 0;
    std::vector<std::string> parameters;
    bool forceOpen = false;
    unsigned int protocolId = 5383;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NotificationByServerMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _parametersFunc(ICustomDataInput &input);

    void _forceOpenFunc(ICustomDataInput &input);
};

#endif