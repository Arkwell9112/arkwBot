#ifndef GAMEROLEPLAYNPCWITHQUESTINFORMATIONS
#define GAMEROLEPLAYNPCWITHQUESTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayNpcQuestFlag.h"
#include "GameRolePlayNpcInformations.h"

class GameRolePlayNpcWithQuestInformations : public GameRolePlayNpcInformations {
public:
    GameRolePlayNpcQuestFlag questFlag;
    unsigned int protocolId = 3740;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayNpcWithQuestInformations(ICustomDataInput &input);
};

#endif