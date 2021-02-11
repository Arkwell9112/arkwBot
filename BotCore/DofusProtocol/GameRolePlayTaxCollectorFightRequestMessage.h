#ifndef GAMEROLEPLAYTAXCOLLECTORFIGHTREQUESTMESSAGE
#define GAMEROLEPLAYTAXCOLLECTORFIGHTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayTaxCollectorFightRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9076;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayTaxCollectorFightRequestMessage(ICustomDataInput &input);
};

#endif