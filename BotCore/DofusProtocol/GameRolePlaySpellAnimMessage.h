#ifndef GAMEROLEPLAYSPELLANIMMESSAGE
#define GAMEROLEPLAYSPELLANIMMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlaySpellAnimMessage : public NetworkInterface {
public:
    double casterId = 0;
    unsigned int targetCellId = 0;
    unsigned int spellId = 0;
    int spellLevel = 0;
    unsigned int protocolId = 8918;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlaySpellAnimMessage(ICustomDataInput &input);

    void _casterIdFunc(ICustomDataInput &input);

    void _targetCellIdFunc(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _spellLevelFunc(ICustomDataInput &input);
};

#endif