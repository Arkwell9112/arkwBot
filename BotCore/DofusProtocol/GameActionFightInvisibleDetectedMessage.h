#ifndef GAMEACTIONFIGHTINVISIBLEDETECTEDMESSAGE
#define GAMEACTIONFIGHTINVISIBLEDETECTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightInvisibleDetectedMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;
    unsigned int protocolId = 8823;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightInvisibleDetectedMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif