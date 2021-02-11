#ifndef DUNGEONPARTYFINDERPLAYER
#define DUNGEONPARTYFINDERPLAYER

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class DungeonPartyFinderPlayer : public NetworkInterface {
public:
    double playerId = 0;
    std::string playerName;
    int breed = 0;
    bool sex = false;
    unsigned int level = 0;
    unsigned int protocolId = 4840;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderPlayer(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif