#ifndef DUNGEONPARTYFINDERAVAILABLEDUNGEONSMESSAGE
#define DUNGEONPARTYFINDERAVAILABLEDUNGEONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class DungeonPartyFinderAvailableDungeonsMessage : public NetworkInterface {
public:
    std::vector<unsigned int> dungeonIds;
    unsigned int protocolId = 4023;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderAvailableDungeonsMessage(ICustomDataInput &input);

    void _dungeonIdsFunc(ICustomDataInput &input);
};

#endif