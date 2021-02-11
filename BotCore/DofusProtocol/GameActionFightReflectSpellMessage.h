#ifndef GAMEACTIONFIGHTREFLECTSPELLMESSAGE
#define GAMEACTIONFIGHTREFLECTSPELLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightReflectSpellMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int protocolId = 9574;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightReflectSpellMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif