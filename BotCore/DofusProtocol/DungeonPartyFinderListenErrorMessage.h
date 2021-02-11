#ifndef DUNGEONPARTYFINDERLISTENERRORMESSAGE
#define DUNGEONPARTYFINDERLISTENERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DungeonPartyFinderListenErrorMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    unsigned int protocolId = 2687;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderListenErrorMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);
};

#endif