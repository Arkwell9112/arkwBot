#ifndef GAMEACTIONFIGHTDROPCHARACTERMESSAGE
#define GAMEACTIONFIGHTDROPCHARACTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightDropCharacterMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;
    unsigned int protocolId = 4845;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDropCharacterMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif