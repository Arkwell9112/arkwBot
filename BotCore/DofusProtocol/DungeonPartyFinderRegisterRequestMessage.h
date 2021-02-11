#ifndef DUNGEONPARTYFINDERREGISTERREQUESTMESSAGE
#define DUNGEONPARTYFINDERREGISTERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class DungeonPartyFinderRegisterRequestMessage : public NetworkInterface {
public:
    std::vector<unsigned int> dungeonIds;
    unsigned int protocolId = 1925;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderRegisterRequestMessage(ICustomDataInput &input);

    void _dungeonIdsFunc(ICustomDataInput &input);
};

#endif