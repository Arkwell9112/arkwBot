#ifndef FRIENDWARNONLEVELGAINSTATEMESSAGE
#define FRIENDWARNONLEVELGAINSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendWarnOnLevelGainStateMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 5459;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendWarnOnLevelGainStateMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif