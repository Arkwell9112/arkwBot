#ifndef GAMEACTIONNOOPMESSAGE
#define GAMEACTIONNOOPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameActionNoopMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1552;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionNoopMessage(ICustomDataInput &input);
};

#endif