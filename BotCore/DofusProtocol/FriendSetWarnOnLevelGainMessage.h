#ifndef FRIENDSETWARNONLEVELGAINMESSAGE
#define FRIENDSETWARNONLEVELGAINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendSetWarnOnLevelGainMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 8698;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSetWarnOnLevelGainMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif