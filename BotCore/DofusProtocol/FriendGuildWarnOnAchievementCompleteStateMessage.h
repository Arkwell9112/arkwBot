#ifndef FRIENDGUILDWARNONACHIEVEMENTCOMPLETESTATEMESSAGE
#define FRIENDGUILDWARNONACHIEVEMENTCOMPLETESTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class FriendGuildWarnOnAchievementCompleteStateMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 5135;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendGuildWarnOnAchievementCompleteStateMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif