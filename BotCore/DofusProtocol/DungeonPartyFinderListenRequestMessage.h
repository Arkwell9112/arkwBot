#ifndef DUNGEONPARTYFINDERLISTENREQUESTMESSAGE
#define DUNGEONPARTYFINDERLISTENREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DungeonPartyFinderListenRequestMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    unsigned int protocolId = 968;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderListenRequestMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);
};

#endif