#ifndef GAMEFIGHTLEAVEMESSAGE
#define GAMEFIGHTLEAVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightLeaveMessage : public NetworkInterface {
public:
    double charId = 0;
    unsigned int protocolId = 4796;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightLeaveMessage(ICustomDataInput &input);

    void _charIdFunc(ICustomDataInput &input);
};

#endif