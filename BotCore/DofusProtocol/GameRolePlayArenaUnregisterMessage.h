#ifndef GAMEROLEPLAYARENAUNREGISTERMESSAGE
#define GAMEROLEPLAYARENAUNREGISTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayArenaUnregisterMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7874;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaUnregisterMessage(ICustomDataInput &input);
};

#endif