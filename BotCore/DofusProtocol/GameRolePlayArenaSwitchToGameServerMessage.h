#ifndef GAMEROLEPLAYARENASWITCHTOGAMESERVERMESSAGE
#define GAMEROLEPLAYARENASWITCHTOGAMESERVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameRolePlayArenaSwitchToGameServerMessage : public NetworkInterface {
public:
    bool validToken = false;
    std::vector<int> ticket;
    int homeServerId = 0;
    unsigned int protocolId = 4687;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaSwitchToGameServerMessage(ICustomDataInput &input);

    void _validTokenFunc(ICustomDataInput &input);

    void _ticketFunc(ICustomDataInput &input);

    void _homeServerIdFunc(ICustomDataInput &input);
};

#endif