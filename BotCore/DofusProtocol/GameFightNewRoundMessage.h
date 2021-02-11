#ifndef GAMEFIGHTNEWROUNDMESSAGE
#define GAMEFIGHTNEWROUNDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightNewRoundMessage : public NetworkInterface {
public:
    unsigned int roundNumber = 0;
    unsigned int protocolId = 6998;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightNewRoundMessage(ICustomDataInput &input);

    void _roundNumberFunc(ICustomDataInput &input);
};

#endif