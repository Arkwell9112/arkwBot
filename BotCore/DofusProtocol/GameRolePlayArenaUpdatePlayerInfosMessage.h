#ifndef GAMEROLEPLAYARENAUPDATEPLAYERINFOSMESSAGE
#define GAMEROLEPLAYARENAUPDATEPLAYERINFOSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ArenaRankInfos.h"

class GameRolePlayArenaUpdatePlayerInfosMessage : public NetworkInterface {
public:
    ArenaRankInfos solo;
    unsigned int protocolId = 8827;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaUpdatePlayerInfosMessage(ICustomDataInput &input);
};

#endif