#ifndef GAMEACTIONFIGHTCLOSECOMBATMESSAGE
#define GAMEACTIONFIGHTCLOSECOMBATMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionFightTargetedAbilityMessage.h"

class GameActionFightCloseCombatMessage : public AbstractGameActionFightTargetedAbilityMessage {
public:
    unsigned int weaponGenericId = 0;
    unsigned int protocolId = 4873;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightCloseCombatMessage(ICustomDataInput &input);

    void _weaponGenericIdFunc(ICustomDataInput &input);
};

#endif