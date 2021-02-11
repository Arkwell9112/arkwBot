#ifndef GAMEFIGHTTURNREADYREQUESTMESSAGE
#define GAMEFIGHTTURNREADYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightTurnReadyRequestMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 9173;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnReadyRequestMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif