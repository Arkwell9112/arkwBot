#ifndef GAMECONTEXTKICKMESSAGE
#define GAMECONTEXTKICKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextKickMessage : public NetworkInterface {
public:
    double targetId = 0;
    unsigned int protocolId = 5382;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextKickMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif