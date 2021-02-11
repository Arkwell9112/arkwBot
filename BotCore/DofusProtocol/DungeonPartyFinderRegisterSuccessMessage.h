#ifndef DUNGEONPARTYFINDERREGISTERSUCCESSMESSAGE
#define DUNGEONPARTYFINDERREGISTERSUCCESSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class DungeonPartyFinderRegisterSuccessMessage : public NetworkInterface {
public:
    std::vector<unsigned int> dungeonIds;
    unsigned int protocolId = 9610;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderRegisterSuccessMessage(ICustomDataInput &input);

    void _dungeonIdsFunc(ICustomDataInput &input);
};

#endif