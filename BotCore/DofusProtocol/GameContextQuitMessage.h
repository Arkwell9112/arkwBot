#ifndef GAMECONTEXTQUITMESSAGE
#define GAMECONTEXTQUITMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextQuitMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2134;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextQuitMessage(ICustomDataInput &input);
};

#endif