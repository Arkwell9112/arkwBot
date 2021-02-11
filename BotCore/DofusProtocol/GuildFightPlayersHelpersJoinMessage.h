#ifndef GUILDFIGHTPLAYERSHELPERSJOINMESSAGE
#define GUILDFIGHTPLAYERSHELPERSJOINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalPlusLookInformations.h"

class GuildFightPlayersHelpersJoinMessage : public NetworkInterface {
public:
    double fightId = 0;
    CharacterMinimalPlusLookInformations playerInfo;
    unsigned int protocolId = 9419;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightPlayersHelpersJoinMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif