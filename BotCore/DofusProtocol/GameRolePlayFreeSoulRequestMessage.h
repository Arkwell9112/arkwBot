#ifndef GAMEROLEPLAYFREESOULREQUESTMESSAGE
#define GAMEROLEPLAYFREESOULREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayFreeSoulRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4009;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayFreeSoulRequestMessage(ICustomDataInput &input);
};

#endif