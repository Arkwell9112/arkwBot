#ifndef GAMEFIGHTTURNENDMESSAGE
#define GAMEFIGHTTURNENDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightTurnEndMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 9648;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnEndMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif