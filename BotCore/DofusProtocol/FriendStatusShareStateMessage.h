#ifndef FRIENDSTATUSSHARESTATEMESSAGE
#define FRIENDSTATUSSHARESTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendStatusShareStateMessage : public NetworkInterface {
public:
    bool share = false;
    unsigned int protocolId = 9665;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendStatusShareStateMessage(ICustomDataInput &input);

    void _shareFunc(ICustomDataInput &input);
};

#endif