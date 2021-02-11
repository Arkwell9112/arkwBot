#ifndef GAMEFIGHTJOINREQUESTMESSAGE
#define GAMEFIGHTJOINREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightJoinRequestMessage : public NetworkInterface {
public:
    double fighterId = 0;
    unsigned int fightId = 0;
    unsigned int protocolId = 1236;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightJoinRequestMessage(ICustomDataInput &input);

    void _fighterIdFunc(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif