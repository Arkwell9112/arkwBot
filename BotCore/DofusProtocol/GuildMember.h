#ifndef GUILDMEMBER
#define GUILDMEMBER

#include "../IO/ICustomDataInput.h"
#include "PlayerStatus.h"
#include "CharacterMinimalInformations.h"

class GuildMember : public CharacterMinimalInformations {
public:
    int breed = 0;
    bool sex = false;
    unsigned int rank = 0;
    double givenExperience = 0;
    unsigned int experienceGivenPercent = 0;
    unsigned int rights = 0;
    unsigned int connected = 99;
    int alignmentSide = 0;
    unsigned int hoursSinceLastConnection = 0;
    unsigned int moodSmileyId = 0;
    unsigned int accountId = 0;
    int achievementPoints = 0;
    PlayerStatus status;
    bool havenBagShared = false;
    unsigned int protocolId = 9947;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMember(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _rankFunc(ICustomDataInput &input);

    void _givenExperienceFunc(ICustomDataInput &input);

    void _experienceGivenPercentFunc(ICustomDataInput &input);

    void _rightsFunc(ICustomDataInput &input);

    void _connectedFunc(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);

    void _hoursSinceLastConnectionFunc(ICustomDataInput &input);

    void _moodSmileyIdFunc(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _achievementPointsFunc(ICustomDataInput &input);
};

#endif