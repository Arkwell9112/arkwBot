#ifndef FRIENDGUILDSETWARNONACHIEVEMENTCOMPLETEMESSAGE
#define FRIENDGUILDSETWARNONACHIEVEMENTCOMPLETEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class FriendGuildSetWarnOnAchievementCompleteMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 5946;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendGuildSetWarnOnAchievementCompleteMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif