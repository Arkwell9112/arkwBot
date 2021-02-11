#ifndef GAMEROLEPLAYGROUPMONSTERINFORMATIONS
#define GAMEROLEPLAYGROUPMONSTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GroupMonsterStaticInformations.h"
#include "GameRolePlayActorInformations.h"

class GameRolePlayGroupMonsterInformations : public GameRolePlayActorInformations {
public:
    GroupMonsterStaticInformations staticInfos;
    int lootShare = 0;
    int alignmentSide = 0;
    bool keyRingBonus = false;
    bool hasHardcoreDrop = false;
    bool hasAVARewardToken = false;
    unsigned int protocolId = 9292;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayGroupMonsterInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _lootShareFunc(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);
};

#endif