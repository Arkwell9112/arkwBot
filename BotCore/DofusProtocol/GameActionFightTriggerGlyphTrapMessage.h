#ifndef GAMEACTIONFIGHTTRIGGERGLYPHTRAPMESSAGE
#define GAMEACTIONFIGHTTRIGGERGLYPHTRAPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightTriggerGlyphTrapMessage : public AbstractGameActionMessage {
public:
    int markId = 0;
    unsigned int markImpactCell = 0;
    double triggeringCharacterId = 0;
    unsigned int triggeredSpellId = 0;
    unsigned int protocolId = 2864;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightTriggerGlyphTrapMessage(ICustomDataInput &input);

    void _markIdFunc(ICustomDataInput &input);

    void _markImpactCellFunc(ICustomDataInput &input);

    void _triggeringCharacterIdFunc(ICustomDataInput &input);

    void _triggeredSpellIdFunc(ICustomDataInput &input);
};

#endif