#ifndef DUNGEONPARTYFINDERREGISTERERRORMESSAGE
#define DUNGEONPARTYFINDERREGISTERERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DungeonPartyFinderRegisterErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7557;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DungeonPartyFinderRegisterErrorMessage(ICustomDataInput &input);
};

#endif