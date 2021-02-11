#ifndef GUILDFIGHTTAKEPLACEREQUESTMESSAGE
#define GUILDFIGHTTAKEPLACEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GuildFightJoinRequestMessage.h"

class GuildFightTakePlaceRequestMessage : public GuildFightJoinRequestMessage {
public:
    int replacedCharacterId = 0;
    unsigned int protocolId = 2860;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFightTakePlaceRequestMessage(ICustomDataInput &input);

    void _replacedCharacterIdFunc(ICustomDataInput &input);
};

#endif