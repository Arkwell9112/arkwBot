#ifndef GAMEFIGHTTURNFINISHMESSAGE
#define GAMEFIGHTTURNFINISHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightTurnFinishMessage : public NetworkInterface {
public:
    bool isAfk = false;
    unsigned int protocolId = 9394;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnFinishMessage(ICustomDataInput &input);

    void _isAfkFunc(ICustomDataInput &input);
};

#endif