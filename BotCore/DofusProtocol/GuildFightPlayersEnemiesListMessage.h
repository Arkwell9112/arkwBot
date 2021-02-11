#ifndef GUILDFIGHTPLAYERSENEMIESLISTMESSAGE
#define GUILDFIGHTPLAYERSENEMIESLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "CharacterMinimalPlusLookInformations.h"

class GuildFightPlayersEnemiesListMessage : public NetworkInterface {
public:
    double fightId = 0;
    std::vector<CharacterMinimalPlusLookInformations> playerInfo;
    unsigned int protocolId = 272;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightPlayersEnemiesListMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _playerInfoFunc(ICustomDataInput &input);
};

#endif