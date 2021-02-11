#ifndef GAMEFIGHTOPTIONSTATEUPDATEMESSAGE
#define GAMEFIGHTOPTIONSTATEUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightOptionStateUpdateMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    unsigned int teamId = 2;
    unsigned int option = 3;
    bool state = false;
    unsigned int protocolId = 7563;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightOptionStateUpdateMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _teamIdFunc(ICustomDataInput &input);

    void _optionFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);
};

#endif