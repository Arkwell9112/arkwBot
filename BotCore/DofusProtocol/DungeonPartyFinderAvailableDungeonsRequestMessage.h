#ifndef DUNGEONPARTYFINDERAVAILABLEDUNGEONSREQUESTMESSAGE
#define DUNGEONPARTYFINDERAVAILABLEDUNGEONSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DungeonPartyFinderAvailableDungeonsRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5060;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderAvailableDungeonsRequestMessage(ICustomDataInput &input);
};

#endif