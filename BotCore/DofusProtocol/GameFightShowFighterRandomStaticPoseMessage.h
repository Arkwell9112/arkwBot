#ifndef GAMEFIGHTSHOWFIGHTERRANDOMSTATICPOSEMESSAGE
#define GAMEFIGHTSHOWFIGHTERRANDOMSTATICPOSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameFightShowFighterMessage.h"

class GameFightShowFighterRandomStaticPoseMessage : public GameFightShowFighterMessage {
public:
    unsigned int protocolId = 3415;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightShowFighterRandomStaticPoseMessage(ICustomDataInput &input);
};

#endif