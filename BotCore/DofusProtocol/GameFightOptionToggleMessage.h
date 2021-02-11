#ifndef GAMEFIGHTOPTIONTOGGLEMESSAGE
#define GAMEFIGHTOPTIONTOGGLEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightOptionToggleMessage : public NetworkInterface {
public:
    unsigned int option = 3;
    unsigned int protocolId = 8943;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightOptionToggleMessage(ICustomDataInput &input);

    void _optionFunc(ICustomDataInput &input);
};

#endif