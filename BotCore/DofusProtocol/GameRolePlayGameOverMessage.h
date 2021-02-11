#ifndef GAMEROLEPLAYGAMEOVERMESSAGE
#define GAMEROLEPLAYGAMEOVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayGameOverMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8075;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayGameOverMessage(ICustomDataInput &input);
};

#endif