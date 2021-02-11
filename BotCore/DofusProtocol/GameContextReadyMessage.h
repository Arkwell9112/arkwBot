#ifndef GAMECONTEXTREADYMESSAGE
#define GAMECONTEXTREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextReadyMessage : public NetworkInterface {
public:
    double mapId = 0;
    unsigned int protocolId = 9444;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextReadyMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif