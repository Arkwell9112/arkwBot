#ifndef GAMEACTIONFIGHTCARRYCHARACTERMESSAGE
#define GAMEACTIONFIGHTCARRYCHARACTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightCarryCharacterMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;
    unsigned int protocolId = 5722;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightCarryCharacterMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif