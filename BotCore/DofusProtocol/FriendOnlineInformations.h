#ifndef FRIENDONLINEINFORMATIONS
#define FRIENDONLINEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "GuildInformations.h"
#include "PlayerStatus.h"
#include "FriendInformations.h"

class FriendOnlineInformations : public FriendInformations {
public:
    double playerId = 0;
    std::string playerName;
    unsigned int level = 0;
    int alignmentSide = 0;
    int breed = 0;
    bool sex = false;
    GuildInformations guildInfo;
    unsigned int moodSmileyId = 0;
    PlayerStatus status;
    bool havenBagShared = false;
    unsigned int protocolId = 5289;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendOnlineInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _moodSmileyIdFunc(ICustomDataInput &input);
};

#endif