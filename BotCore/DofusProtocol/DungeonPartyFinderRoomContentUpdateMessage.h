#ifndef DUNGEONPARTYFINDERROOMCONTENTUPDATEMESSAGE
#define DUNGEONPARTYFINDERROOMCONTENTUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "DungeonPartyFinderPlayer.h"

class DungeonPartyFinderRoomContentUpdateMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    std::vector<DungeonPartyFinderPlayer> addedPlayers;
    std::vector<double> removedPlayersIds;
    unsigned int protocolId = 2957;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderRoomContentUpdateMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _addedPlayersFunc(ICustomDataInput &input);

    void _removedPlayersIdsFunc(ICustomDataInput &input);
};

#endif