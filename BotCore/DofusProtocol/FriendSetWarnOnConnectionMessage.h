#ifndef FRIENDSETWARNONCONNECTIONMESSAGE
#define FRIENDSETWARNONCONNECTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendSetWarnOnConnectionMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 8051;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSetWarnOnConnectionMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif