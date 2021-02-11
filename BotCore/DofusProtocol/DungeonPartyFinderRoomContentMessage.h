#ifndef DUNGEONPARTYFINDERROOMCONTENTMESSAGE
#define DUNGEONPARTYFINDERROOMCONTENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "DungeonPartyFinderPlayer.h"

class DungeonPartyFinderRoomContentMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    std::vector<DungeonPartyFinderPlayer> players;
    unsigned int protocolId = 2679;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderRoomContentMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _playersFunc(ICustomDataInput &input);
};

#endif