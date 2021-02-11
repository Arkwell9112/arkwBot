#ifndef GAMEFIGHTRESUMEWITHSLAVESMESSAGE
#define GAMEFIGHTRESUMEWITHSLAVESMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GameFightResumeSlaveInfo.h"
#include "GameFightResumeMessage.h"

class GameFightResumeWithSlavesMessage : public GameFightResumeMessage {
public:
    std::vector<GameFightResumeSlaveInfo> slavesInfo;
    unsigned int protocolId = 6337;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightResumeWithSlavesMessage(ICustomDataInput &input);

    void _slavesInfoFunc(ICustomDataInput &input);
};

#endif