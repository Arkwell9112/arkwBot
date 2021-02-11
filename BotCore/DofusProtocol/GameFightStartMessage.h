#ifndef GAMEFIGHTSTARTMESSAGE
#define GAMEFIGHTSTARTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Idol.h"

class GameFightStartMessage : public NetworkInterface {
public:
    std::vector<Idol> idols;
    unsigned int protocolId = 9802;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightStartMessage(ICustomDataInput &input);

    void _idolsFunc(ICustomDataInput &input);
};

#endif