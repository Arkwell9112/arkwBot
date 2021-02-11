#ifndef GAMEROLEPLAYARENAUPDATEPLAYERINFOSALLQUEUESMESSAGE
#define GAMEROLEPLAYARENAUPDATEPLAYERINFOSALLQUEUESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ArenaRankInfos.h"
#include "GameRolePlayArenaUpdatePlayerInfosMessage.h"

class GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage : public GameRolePlayArenaUpdatePlayerInfosMessage {
public:
    ArenaRankInfos team;
    ArenaRankInfos duel;
    unsigned int protocolId = 8018;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage(ICustomDataInput &input);
};

#endif