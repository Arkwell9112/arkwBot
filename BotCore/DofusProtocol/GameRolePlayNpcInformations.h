#ifndef GAMEROLEPLAYNPCINFORMATIONS
#define GAMEROLEPLAYNPCINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayActorInformations.h"

class GameRolePlayNpcInformations : public GameRolePlayActorInformations {
public:
    unsigned int npcId = 0;
    bool sex = false;
    unsigned int specialArtworkId = 0;
    unsigned int protocolId = 863;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayNpcInformations(ICustomDataInput &input);

    void _npcIdFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _specialArtworkIdFunc(ICustomDataInput &input);
};

#endif