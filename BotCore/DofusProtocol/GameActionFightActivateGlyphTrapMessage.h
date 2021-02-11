#ifndef GAMEACTIONFIGHTACTIVATEGLYPHTRAPMESSAGE
#define GAMEACTIONFIGHTACTIVATEGLYPHTRAPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightActivateGlyphTrapMessage : public AbstractGameActionMessage {
public:
    int markId = 0;
    bool active = false;
    unsigned int protocolId = 9287;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightActivateGlyphTrapMessage(ICustomDataInput &input);

    void _markIdFunc(ICustomDataInput &input);

    void _activeFunc(ICustomDataInput &input);
};

#endif