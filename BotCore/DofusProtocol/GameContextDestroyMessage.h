#ifndef GAMECONTEXTDESTROYMESSAGE
#define GAMECONTEXTDESTROYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextDestroyMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1940;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextDestroyMessage(ICustomDataInput &input);
};

#endif