#ifndef GAMEACTIONFIGHTINVISIBILITYMESSAGE
#define GAMEACTIONFIGHTINVISIBILITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightInvisibilityMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int state = 0;
    unsigned int protocolId = 4961;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightInvisibilityMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);
};

#endif