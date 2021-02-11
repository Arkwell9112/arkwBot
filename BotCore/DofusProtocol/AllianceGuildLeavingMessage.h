#ifndef ALLIANCEGUILDLEAVINGMESSAGE
#define ALLIANCEGUILDLEAVINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceGuildLeavingMessage : public NetworkInterface {
public:
    bool kicked = false;
    unsigned int guildId = 0;
    unsigned int protocolId = 7369;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceGuildLeavingMessage(ICustomDataInput &input);

    void _kickedFunc(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);
};

#endif