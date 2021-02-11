#ifndef FRIENDWARNONCONNECTIONSTATEMESSAGE
#define FRIENDWARNONCONNECTIONSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendWarnOnConnectionStateMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 9116;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendWarnOnConnectionStateMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif