#ifndef GAMEFIGHTTURNSTARTMESSAGE
#define GAMEFIGHTTURNSTARTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightTurnStartMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int waitTime = 0;
    unsigned int protocolId = 9013;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnStartMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _waitTimeFunc(ICustomDataInput &input);
};

#endif