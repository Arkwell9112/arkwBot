#ifndef GAMEACTIONFIGHTVANISHMESSAGE
#define GAMEACTIONFIGHTVANISHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightVanishMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int protocolId = 5411;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightVanishMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif