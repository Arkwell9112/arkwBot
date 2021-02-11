#ifndef GAMEROLEPLAYTREASUREHINTINFORMATIONS
#define GAMEROLEPLAYTREASUREHINTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayActorInformations.h"

class GameRolePlayTreasureHintInformations : public GameRolePlayActorInformations {
public:
    unsigned int npcId = 0;
    unsigned int protocolId = 8498;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayTreasureHintInformations(ICustomDataInput &input);

    void _npcIdFunc(ICustomDataInput &input);
};

#endif