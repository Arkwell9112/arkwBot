#ifndef GAMECONTEXTCREATEMESSAGE
#define GAMECONTEXTCREATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextCreateMessage : public NetworkInterface {
public:
    unsigned int context = 1;
    unsigned int protocolId = 7494;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextCreateMessage(ICustomDataInput &input);

    void _contextFunc(ICustomDataInput &input);
};

#endif