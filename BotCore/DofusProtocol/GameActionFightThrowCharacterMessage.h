#ifndef GAMEACTIONFIGHTTHROWCHARACTERMESSAGE
#define GAMEACTIONFIGHTTHROWCHARACTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightThrowCharacterMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;
    unsigned int protocolId = 1045;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightThrowCharacterMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif